#include <stdio.h>

void conv(double* grades, double* scores, int s) //������ 100�� �������� ��ȯ�ϴ� �Լ�
{
    for (int i=0; i<s; i++) {
        scores[i] =grades[i]*(100.0/4.3); //������ 100�� �������� ��ȯ�Ͽ� �迭 score[]�� ����
    }
}

int main() {
    double grades[] = {4.2, 3.1, 4.3, 3.5, 3.6, 3.4, 3.8, 4.1, 3.2, 3.7}; //4.3�� ������ �л����� ����
    double scores[10]; //100�� �������� ��ȯ�� ������ ������ �迭
    conv(grades, scores, 10); //�Լ� ȣ��, ������ 100�� �������� ��ȯ
    printf("-��ȯ�� ����-\n");
    for (int i=0; i<10; i++){
        printf("�л� %d: %.2lf \n", i + 1, scores[i]); //��ȯ�� ���� ���
    }
    return 0;
}