#include <stdio.h>
#include <stdarg.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	printf("상자의 가로, 세로, 높이를 각각 입력 :\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	float volume;
	volume = a * b * c;
	printf("\n상자의 부피는 %f 입니다.", volume);

	return 0;
}