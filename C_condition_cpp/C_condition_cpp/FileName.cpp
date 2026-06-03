#include <iostream>

int main(void)
{
	int x, y;
	std::cout << "두 수를 차례대로 입력하시오 : " << std::endl;
// cin 을 사용함 뿐으로도 , 두수가 공백이나 엔터로 구분되는 것을 받을 수 있다.
	std::cin >> x >> y;

	if (x > y)
	{
		std::cout << "큰 수 : " << x << " 작은 수 : " << y << "\n" << std::endl;
	}
	else
	{
		std::cout << "큰 수 : " << y << " 작은 수 : " << y << "\n" << std::endl;
	}
	return 0;
}