#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "두 개의 정수를 입력하시오 : " << endl;
	cin >> a >> b;

	int c = a / b;
	int d = a % b;

	cout << "몫 : " << c << " 나머지 : " << d << endl;

	return 0;
}