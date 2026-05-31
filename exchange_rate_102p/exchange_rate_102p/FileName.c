/* 환율을 계산하는 프로그램 따라하기 */
#include <stdio.h>
#include <math.h>

int main(void)
{
	float rate_WD = 1400;
	float rate_WEU = 1600;
	int krw = 100000;

	float usd = (int)round(krw / rate_WD);
	float euro = (int)round(krw / rate_WEU);

	printf("원화 %d원은 %f 달러입니다.\n", krw, usd);
	printf("원화 %d원은 %f 유로입니다.\n\n", krw, euro);

	/* cpp의 문법과 혼동하지 않는 것이 필요한게 11, 12줄 항 */

	return 0;
}