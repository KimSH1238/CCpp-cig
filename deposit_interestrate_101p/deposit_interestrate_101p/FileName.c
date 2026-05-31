/* (인플레이션을 고려한), 저축액을 계산하는 용도의 프로그램 */
#include <stdio.h>

int main(void)
{
	int salary;
	int consume;
	float intrate = 1.02;
	float infla = 1.01;

	printf("월급을 입력하시오 :");
	scanf_s("%d", &salary);
	printf("평균 지출을 입력하시오 :");
	scanf_s("%d", &consume);

	float deposit = 0;
	int i = 0;
	do 
	{
		i = i + 1;
		deposit = 12 * (salary - consume) + deposit;
		deposit = deposit * intrate / infla;
	} while (i < 10);

	printf("10년 동안의 저축액 : %d\n\n", deposit);
	return 0;
}