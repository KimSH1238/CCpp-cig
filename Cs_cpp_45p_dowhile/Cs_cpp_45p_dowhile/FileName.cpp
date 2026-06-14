#include <iostream>
using namespace std;

void sample(int a)
{
	do
	{
		cout << a-- ;
	} while (a >= 0);
}
int main()
{
	int b;
	cout << "사용할 정수 내림차순을 입력하시오 : " << endl;
	cin >> b;
	sample(b);
	sample(-1);
	sample(-3);

	cout << endl;
	return 0;
}