// radiation.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
 // 1. 주어지는 상수 및 계수 정의
    const double STEFAN_B = 5.67e-8;
    const double AREA = 1;
 // 주어진 단면적 당 값을 구하기 위한 설정
    const double SUR_EMI = 0.8;
    const double VIEW_FACTOR = 0.6;
 // 이 항이 다음 코딩에, 직접 계산해야 하는 부분

    double celsius1, celsius2, kelvin1, kelvin2;
    double net;

    printf("표면의 온도를 셀시우스로 입력하시오 : ");
    scanf_s("%lf", &celsius1);
    printf("반대편의 표면온도를 셀시우스로 입력하시오 : ");
    scanf_s("%lf", &celsius2);

    kelvin1 = celsius1 + 273.15;
    kelvin2 = celsius2 + 273.15;
    double coeff = STEFAN_B * AREA * SUR_EMI * VIEW_FACTOR;

    net = coeff * (pow(kelvin1, 4) - pow(kelvin2, 4));
    printf("해당하는 전열량 : %.2fW/m^2\n", net);
}