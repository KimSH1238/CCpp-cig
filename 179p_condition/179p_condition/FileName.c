// 조건 연산자 프로그램 > 조건 연산자를 사용할 필요가 업고, 기존 방식이 더 단순하게 이해 가능하다.
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("두 수를 차례대로 입력하시오 : \n");
	scanf_s("%d %d", &x, &y);

	if (x > y)
	{
		printf("큰 수 : %d 작은 수 : %d\n", x, y);
	}
	else
	{
		printf("큰 수 : %d 작은 수 ; %d\n", y, x);
	}
	return 0;
}