#include <stdio.h>
#include <string.h>

struct professor //professor ����ü ����
{
    char name[50];
    char ph[50];
    char add[50];
    char sub[50];
    char major[50];
};

int main() {
    struct professor p[5] = {
        { "������1", "01011111111", "�������б�", "c������, ��������", "��ǻ�Ͱ���"},
        { "������2", "01011111112", "�������б�", "ȭ�а���, ȭ�н���", "ȭ��"},
        { "������3", "01011111113", "�������б�", "������, ���", "����"},
        { "������4", "01011111114", "�������б�", "�����а���, �����а���", "������"},
        { "������5", "01011111115", "�������б�", "�����а���, ��������", "������"}
    }; //professor ���� �ʱ�ȭ

    //professor ���� ���
    printf("���� ���� ���:\n");
    for (int i = 0; i < 5; i++) {
        printf("���� %d ����:\n", i + 1);
        printf("�̸�: %s\n", p[i].name);
        printf("��ȭ��ȣ: %s\n", p[i].ph);
        printf("�ּ�: %s\n", p[i].add);
        printf("��� ����: %s\n", p[i].sub);
        printf("�а�: %s\n", p[i].major);
        printf("\n");
    }
    return 0;
}