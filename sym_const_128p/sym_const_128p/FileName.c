#include <stdio.h>
#include <math.h>
#define TAX_RATE 0.2

int main(void)
{
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("월급을 입력하시오 :\n");
	scanf_s("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("연봉은 %d 입니다.\n", y_salary);
	printf("세금은 %d 입니다.\n,", (int)round(y_salary * TAX_RATE));

/* 기존의 문제가 메스헤더의 호출을 하지 않음으로 일어났음을 확인 */

	return 0;
}