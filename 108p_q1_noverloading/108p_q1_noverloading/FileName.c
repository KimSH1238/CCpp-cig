#include <math.h>
#include <stdio.h>

int main(void)
{
	int a, b, c;
	float sum, avg;

	printf("정수를 입력하시오 : \n");
	scanf_s("%d", &a);
	printf("정수를 입력하시오 : \n");
	scanf_s("%d", &b);
	printf("정수를 입력하시오 : \n");
	scanf_s("%d", &c);

	sum = a + b + c;
	avg = round(sum / 3.0);

	printf("합계는 %f 이고, 평균값 반올림은 %f 입니다.\n\n", sum, avg);

	return 0;
}