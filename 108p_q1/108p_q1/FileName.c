#include <math.h>
#include <stdio.h>

/* 합계와 평균값을 정수로 구하는 프로그램 */

#include <stdio.h>

// 실제 구현된 함수들
int add_i(int a, int b) { return a + b; }
double add_d(double a, double b) { return a + b; }

// _Generic을 이용한 매크로 정의 (오버로딩처럼 작동)
#define add(X, Y) _Generic((X), \
    int: add_i, \
    double: add_d \
)(X, Y)

int main() {
    // 사용자는 동일한 add를 쓰지만 컴파일러가 타입을 보고 알아서 매칭해줍니다.
    printf("%d\n", add(3, 4));       // add_i 호출됨
    printf("%f\n", add(3.5, 4.5));   // add_d 호출됨
    return 0;
}

/* 제미나이에게 질문하고 들어온 코딩 리뷰 (오버로딩 제네릭) */