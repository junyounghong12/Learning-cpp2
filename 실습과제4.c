#include <stdio.h>
#include <string.h>

struct person //person ����ü ����
{
    char name[50];
    char ph[50];
    char add[50];
};

int main() {
    struct person p1 ={"��ö��", "010-1111-1111", "����"}; //person ����ü ���� p1 ���� �� �ʱ�ȭ
    struct person p2 ={"ȫ�ؿ�", "010-2222-2222", "��⵵"}; //person ����ü ���� p2 ���� �� �ʱ�ȭ

    // p1 ���� ���
    printf("ù ��° ��� ����:\n");
    printf("�̸�: %s\n", p1.name);
    printf("��ȭ��ȣ: %s\n", p1.ph);
    printf("�ּ�: %s\n", p1.add);

    // p2 ���� ���
    printf("\n�� ��° ��� ����:\n");
    printf("�̸�: %s\n", p2.name);
    printf("��ȭ��ȣ: %s\n", p2.ph);
    printf("�ּ�: %s\n", p2.add);

    return 0;
}