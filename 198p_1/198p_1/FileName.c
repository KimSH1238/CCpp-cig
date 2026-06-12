#include <stdio.h>

int main()
{ 
	int a, b;
	printf("두 개의 정수를 입력하시오 : \n");
	scanf_s("%d %d", &a, &b);

	int c = a / b;
	int d = a % b;
	printf("몫 : %d, 나머지 : %d\n", c, d);

	return 0;
}