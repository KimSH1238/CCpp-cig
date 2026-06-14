#include <stdio.h>

void sample(int a)
{
	do
	{
		printf("%d", a--);
	}
	while (a >= 0);
// dowhile 문의 문법에 주의해야하는 사항
}
int main()
{
	int b;
	printf("사용할 정수를 내림차순용으로 입력 : ");
	scanf_s("%d", &b);

	sample(b);
	sample(-1);
	sample(-2);
	printf("\n");
}