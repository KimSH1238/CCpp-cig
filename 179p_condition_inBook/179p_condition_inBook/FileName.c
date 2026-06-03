// 조건 연산자 그대로 코딩
#include <stdio.h>

int main(void)
{
	int x, y;
	printf("두 수를 차례대로 입력하시오 : \n");
	scanf_s("%d %d", &x, &y);

	printf("큰 수 = %d , 작은 수 = %d\n", (x > y) ? x : y, (x < y) ? x : y);
	return 0;
}