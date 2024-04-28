#include <stdio.h>
#include <math.h>

struct Complex //복소수를 나타내는 구조체 정의
{
    double real; //실수 부분
    double imag; //허수 부분
};

void result(const struct Complex* n) //조건문 이용하여 복소수를 출력하는 함수
{
    if (n->real == 0.0 && n->imag == 0.0) //실수와 허수 부분이 모두 0
        printf("0");
    else if (n->real == 0) //실수 부분이 0
        printf("%lgi", n->imag);
    else if (n->imag == 0) //허수 부분이 0
        printf("%lg", n->real);
    else  //실수와 허수 부분이 모두 0이 아님
        printf("%lg%+lgi", n->real, n->imag);
}

void add(const struct Complex* n1, const struct Complex* n2) //두 복소수의 더하기 함수
{
    struct Complex sum;
    sum.real=n1->real+n2->real;
    sum.imag=n1->imag+n2->imag;
    result(&sum); //복소수 출력 함수 호출
    printf("\n");
}

void sub(const struct Complex* n1, const struct Complex* n2) //두 복소수의 빼기 함수
{
    struct Complex sum;
    sum.real=n1->real-n2->real;
    sum.imag=n1->imag-n2->imag;
    result(&sum); //복소수 출력 함수 호출
    printf("\n");
}

void mul(const struct Complex* n1, const struct Complex* n2) //두 복소수의 곱하기 함수
{
    struct Complex sum;
    sum.real=n1->real*n2->real-n1->imag*n2->imag;
    sum.imag=n1->real*n2->imag+n1->imag*n2->real;
    result(&sum); //복소수 출력 함수 호출
    printf("\n");
}

void value(const struct Complex* n) //복소수의 절대값 함수
{
    double sum=sqrt(n->real*n->real+n->imag*n->imag);
    printf("%lg\n", sum);
}

int main() {
    struct Complex n1 = {2, 5};
    struct Complex n2 = {5, 3};

    printf("덧셈: ");
    add(&n1, &n2); //덧셈 함수 호출
    printf("뺄셈: ");
    sub(&n1, &n2); //뺄셈 함수 호출
    printf("곱셈: ");
    mul(&n1, &n2); //곱셈 함수 호출
    printf("절대값: \n");
    value(&n1); //절대값 함수 호출
    value(&n2); //절대값 함수 호출
    return 0;
}