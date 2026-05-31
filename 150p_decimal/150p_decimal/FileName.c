#include <stdio.h>
#include <stdarg.h>
#include <math.h>

int main(void)
{
	int x = 10;
	int a = 100;
	char b = 'x';
	float c = 1.23;

	printf("8진수 = %o\n", x);
	printf("16진수 = %x\n", x);

	printf("\n\a");
// 무슨 의미인지를 모르겠는 코딩 \a

	printf("예제\t 프로그램\n");
	printf("%d %c %f\n", a, b, c);

	return 0;
}