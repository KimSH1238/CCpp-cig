#include <stdio.h>
#include <stdarg.h>
#include <math.h>

int main(void)
{
	int x, y;

	printf("두 수를 차례대로 입력하시오 :\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);

	int temp;
	temp = x;
	x = y;
	y = temp;

	printf("순서가 바뀐 결과값은 다음과 같다 : ");
	printf("%d %d\n", x, y);
}