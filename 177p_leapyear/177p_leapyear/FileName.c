// 윤년 프로그램 --> 추후 다양한 언어로 바궈볼 프로그램 (깃허브 수정)
#include <stdio.h>

int main(void)
{
	int year, result;
	char* resultC;

	printf("(윤년 확인 프로그램) 연도를 입력하시오 : \n");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	if (result == 1)
	{
		resultC = "True";
	}
	else
	{
		resultC = "False";
	}
		printf("result = %s\n", resultC);

	return 0;
}