#include <stdio.h>
#include <stdarg.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	printf("상자의 가로, 세로, 높이를 각각 입력 :\n");
	scanf_s("%d %d %d", &a, &b, &c);
// 한번에 받아도, 보이는 화면의 결과값이 동일하는 것을 확인

	float volume;
	volume = a * b * c;
	printf("\n상자의 부피는 %f 입니다.", volume);

	return 0;
}