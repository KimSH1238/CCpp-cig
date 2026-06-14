#include <stdio.h>
#include <stdbool.h>
// 불리언을 사용하려면 호출해야하는 헤더

void sample(int a)
{
	bool first = true;
	while (a >= 0 || first)
	{
		printf("%d", a--);
		first = false;
	}
}
int main()
{
	printf("사용할 내림차순 정수 입력 : ");
	int b;
	scanf_s("%d", &b);
	sample(b);
	sample(-1);

	printf("\n");
}