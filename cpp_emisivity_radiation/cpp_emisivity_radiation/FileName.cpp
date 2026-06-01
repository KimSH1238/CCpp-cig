#include <iostream>
#include <iomanip>
#include <algorithm> // std::clamp 사용을 위함
#include <cmath>

using namespace std;
// 온도의 함수로 표면복사율을 구하는 것을 진행해야 한다.
double getEmi(double tK)
{
	double tC = tK - 273.15;
	double epsilon_0 = 0.7;
	double alpha = 0.0003;
// 두 표면의 재질이 같다고 가정했을 경우, 해당 수식을 이용하게 된다.
// 여기서, 보통의 재질은 일정하므로 적당하다고 가정하였다.
	double epsilon = epsilon_0 + alpha * tC;
// 이 부분 코드가 버전으로 먹지 않으므로,	return clamp(epsilon, 0.0, 1.0);
	return max(0.0, min(epsilon, 1.0));
}

int main()
{
	const double SIGMA = 5.67e-8;
	const double AREA = 1.0;
	const double VIEW_FACTOR = 0.65;
// 해당 부분은 계산이 과도하므로, 처음부터 값을 줌을 사용한다.
	double tC1, tC2;
	cout << "표면 온도항을 셀시우스로 입력 : " << endl;
	cin >> tC1;
	cout << "반대편 표면 온도항을 셀시우스로 입력 : " << endl;
	cin >> tC2;
	double tK1 = tC1 + 273.15;
	double tK2 = tC2 + 273.15;

	double eps1 = getEmi(tK1);
	double eps2 = getEmi(tK2);
// 총괄 복사계수 수식 적용
	double ovF = 1.0 / ((1 - eps1) / eps1 + (1.0 / VIEW_FACTOR) + ((1 - eps2) / eps2));
	double net = SIGMA * AREA * ovF * (pow(tK1, 4) - pow(tK2, 4));

	cout << fixed << setprecision(3);
	cout << "1차측 방사율 : " << eps1 << endl;
	cout << "2차측 방사율 : " << eps2 << endl;
	cout << "조합된 총괄 복사계수 : " << ovF << endl;
	cout << "________" << endl;
	cout << "정미 전열량 : " << fixed << setprecision(2) << net << "W/m^2 이다." << endl;

	return 0;
}
