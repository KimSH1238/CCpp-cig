#include <stdbool.h> // C언어에서 불타입을 쓰기 위해 필요한 헤더파일
#include <stdio.h>

int main(void)
{
	int year;
	bool result; // 헤더를 호출하고 나면, 불타입을 사용할 수 있다.
	char* resultC;

	printf("(윤년 계산 프로그램) 연도를 입력하시오 : \n");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	// Cpp처럼 직관적으로 비교할 수 있다.
	if (result = 0) 
	{
		resultC = "False";
	}
	else
	{
		resultC = "True";
	}
	printf("%s\n",resultC);
	
	return 0;
}