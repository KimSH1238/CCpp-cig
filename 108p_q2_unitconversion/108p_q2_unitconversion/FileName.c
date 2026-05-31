#include <stdarg.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
	int mile;
	float meter;

	printf("마일을 정수로 입력하시오 :\n");
	scanf_s("%d", &mile);

	meter = 1609.0 * mile;
	printf("미터로 환산하면 약 %f 입니다.\n\n", round(meter));

	return 0;
}
