#include <stdio.h>

double* get_max(double* A, int size)
{
    double* max=&A[0]; //�����͸� ù ��° ��ҷ� �ʱ�ȭ
    for (int i=1; i<size; i++){
        if (A[i] > *max) {
            max = &A[i]; //�����͸� ����
        }
    }
    return max; //�ִ밪 ����� �ּ� ��ȯ
}

int main() {
    double arr[] ={5.7, 2.5, 3.6, 2.1, 4.9, 3.8}; //�迭 �ʱ�ȭ
    int size =sizeof(arr)/sizeof(arr[0]); //sizeof ������ ���, size�� 6 ����

    double* max =get_max(arr, size); //�Լ� ȣ��
    if (max !=NULL) {
        printf("�ִ밪�� %.2lf�̰�, �ش� ����� �ּҴ� %p�Դϴ�.\n", *max, (void*)max);
    }
    else {
        printf("�迭�� ����ִ�.\n");
    }
    return 0;
}