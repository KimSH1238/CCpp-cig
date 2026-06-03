#include <iostream>
#include <string> // 문자열을 사용하려면 필요한 코딩

int main(void)
{
	int year;
	bool result;
	std::string resultC; // 시언어의 포인터 대신 안전하다.

	std::cout << "(윤년 계산 프로그램) 연도를 입력하시오 : " << std::endl;
	std::cin >> year; //scanf_s 대신 자료형을 알아서 처리해준다.

	// 관련 조건식은 일치한다.
	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	if (result = true) // Cpp에서도 괄호는 필수적이다.
	{
		resultC = "True";
	}
	else
	{
		resultC = "False";
	}
	std::cout << "result = " << resultC << std::endl;
	
	return 0;
}