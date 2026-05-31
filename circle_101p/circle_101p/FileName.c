/* 원의 면적과 구의 부피를 계산하는 프로그램 */
#include <stdio.h>

int main(void)
{
	float radius;
	float diam;
	float area;
	float volume;

	printf("반지름을 입력 :");
	scanf_s("%f", &radius);
	
	diam = 2 * radius;

	area = 3.141592 * radius * radius;
	volume = 3.141592 / 6 * diam * diam * diam;
	
	printf("원의 면적 : %f\n", area);
	printf("구의 부피 : %f\n", volume);
	return 0;
}