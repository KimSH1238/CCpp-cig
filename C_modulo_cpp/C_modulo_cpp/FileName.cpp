#include <iostream>
using namespace std;
// namespace 를 활용하여 std 들을 생략하는 모습

#define SEC_PER_MIN 60;

int main()
{
	int input, min, sec;
	cout << "초를 입력하시오 : ";
	cin >> input;

	min = input / SEC_PER_MIN;
	sec = input % SEC_PER_MIN;

	cout << input << " 초는 " << min << " 분 " << sec << " 초 입니다." << endl;
	return 0;
}