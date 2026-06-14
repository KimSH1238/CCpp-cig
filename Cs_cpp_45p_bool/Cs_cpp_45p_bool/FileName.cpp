#include <iostream>
using namespace std;

void sample(int a)
{
	bool first = true;
	while (a >= 0 || first)
	{
		cout << a--;
		first = false;
	}
}
int main()
{
	int b;
	cout << "사용할 정수의 숫자를 입력하시오 : " << endl;
	cin >> b;
	sample(b);
	sample(-1);
	sample(-3);
	cout << "" << endl;
}