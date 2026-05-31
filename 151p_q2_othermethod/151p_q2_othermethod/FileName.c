/* 10진수가 아닌 다진수로 표현하는 방법을 실험해보는 문항 */
#include <math.h>
#include <stdio.h>

int main(void)
{
	int data;
	printf("16진수 정수를 입력하시오 :");
	scanf_s("%x", &data);

	printf("x=%08x\n", data);
	printf("x=%04x\n", data);

/* 문제를 해결하기 어려운 유형 */

	return 0;
}