/* (인플레이션을 고려하지 않은), 저축액을 계산하는 용도의 프로그램 */
#include <stdio.h>

int main(void)
{
	int salary;
	int consume;
	int deposit;

	printf("월급을 입력하시오 :");
	scanf_s("%d", &salary);
	printf("평균 지출을 입력하시오 :");
	scanf_s("%d", &consume);

	deposit = 10 * 12 * (salary - consume);
	printf("!0년 동안의 저축액 : %d\n\n", deposit);
	return 0;
}