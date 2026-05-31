#include <math.h>
#include <stdio.h>
#define NUM 89.567

int main(void) 
{
	float number;
	printf("실수를 입력하시오 :\n");
	scanf_s("%f", &number);

	float result = NUM * number;

	printf("실수형식 으로는 반올림으로 곱하여 %f 입니다.\n", round(result));
	printf("지수형식 으로는 반올림 없이 %e 입니다.\n\n", result);

	return 0;
}