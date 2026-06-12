#include <iostream>
#include <iomanip> // 소수점 자릿수 조정을 위해 필요한 헤더

int main(void)
{
	double f_temp, c_temp;

	std::cout << "화씨 온도를 입력하시오 : " << std::endl;
	std::cin >> f_temp;

// C++에서도 정수 나눗셈 방지를 위해 소수점을 입력
	c_temp = (f_temp - 32.0) * (5.0 / 9.0);

// fixed 와 setpricision 을 통해 소수점 고정
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "섭씨 온도는 " << c_temp << " 입니다." << std::endl;

	return 0;
}