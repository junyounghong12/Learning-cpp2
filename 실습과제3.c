#include <stdio.h>
#include <math.h>

struct Complex //���Ҽ��� ��Ÿ���� ����ü ����
{
    double real; //�Ǽ� �κ�
    double imag; //��� �κ�
};

void result(const struct Complex* n) //���ǹ� �̿��Ͽ� ���Ҽ��� ����ϴ� �Լ�
{
    if (n->real == 0.0 && n->imag == 0.0) //�Ǽ��� ��� �κ��� ��� 0
        printf("0");
    else if (n->real == 0) //�Ǽ� �κ��� 0
        printf("%lgi", n->imag);
    else if (n->imag == 0) //��� �κ��� 0
        printf("%lg", n->real);
    else  //�Ǽ��� ��� �κ��� ��� 0�� �ƴ�
        printf("%lg%+lgi", n->real, n->imag);
}

void add(const struct Complex* n1, const struct Complex* n2) //�� ���Ҽ��� ���ϱ� �Լ�
{
    struct Complex sum;
    sum.real=n1->real+n2->real;
    sum.imag=n1->imag+n2->imag;
    result(&sum); //���Ҽ� ��� �Լ� ȣ��
    printf("\n");
}

void sub(const struct Complex* n1, const struct Complex* n2) //�� ���Ҽ��� ���� �Լ�
{
    struct Complex sum;
    sum.real=n1->real-n2->real;
    sum.imag=n1->imag-n2->imag;
    result(&sum); //���Ҽ� ��� �Լ� ȣ��
    printf("\n");
}

void mul(const struct Complex* n1, const struct Complex* n2) //�� ���Ҽ��� ���ϱ� �Լ�
{
    struct Complex sum;
    sum.real=n1->real*n2->real-n1->imag*n2->imag;
    sum.imag=n1->real*n2->imag+n1->imag*n2->real;
    result(&sum); //���Ҽ� ��� �Լ� ȣ��
    printf("\n");
}

void value(const struct Complex* n) //���Ҽ��� ���밪 �Լ�
{
    double sum=sqrt(n->real*n->real+n->imag*n->imag);
    printf("%lg\n", sum);
}

int main() {
    struct Complex n1 = {2, 5};
    struct Complex n2 = {5, 3};

    printf("����: ");
    add(&n1, &n2); //���� �Լ� ȣ��
    printf("����: ");
    sub(&n1, &n2); //���� �Լ� ȣ��
    printf("����: ");
    mul(&n1, &n2); //���� �Լ� ȣ��
    printf("���밪: \n");
    value(&n1); //���밪 �Լ� ȣ��
    value(&n2); //���밪 �Լ� ȣ��
    return 0;
}