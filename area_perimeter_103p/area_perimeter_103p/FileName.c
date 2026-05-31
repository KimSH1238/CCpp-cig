#include <stdio.h>
#include <math.h>

/* 사각형의 단면적과 페리메터를 계산하는 프로그램에서 시작하여 */
/* 개수로 유동과 관련한 수식까지 계산하는 프로그램 돌출이 목적 */

int main(void)
{
	double w;
	double h;
	printf("직사각형의 높이를 입력 :\n");
	scanf_s("%lf", &h);
	printf("직사각형의 폭을 입력 :\n");
	scanf_s("%lf", &w);

	double area;
	double perimeter;
	area = w * h;
	perimeter = 2 * (w * h);

	printf("넓이 :%lf\n", area);
	printf("수변둘레 :%lf\n\n", perimeter);
	printf("수력학 반지름 :%lf\n", area / perimeter);

/* 해당하는 개수로 유동에 관한 수식은, 작성이 곤란하여 뒤로 미루기로 결정 */

	return 0;
}