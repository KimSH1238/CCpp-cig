#include <stdio.h>
#include <math.h>
// #define PTM 3.3058

int main(void)
{
	double area;
	double PTM = 3.3058;

	printf("평을 입력하시오 : ");
	scanf_s("%lf", &area);

	double meter2 = PTM * area;
	printf("해당하는 평수는, %lf 평방제곱미터 입니다.",meter2);
}