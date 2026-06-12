// 나머지 연산자 프로그램
#include <stdio.h>
#define SEC_PER_MIN 60

int main(void)
{
	int input, min, sec;
	printf("초를 입력하시오 : ");
	scanf_s("%d", &input);

	min = input / SEC_PER_MIN;
	sec = input % SEC_PER_MIN;

	printf("%d 초는 %d 분 %d 초 입니다. \n", input, min, sec);
	return 0;
}