#include <stdio.h>
#include <string.h>

struct person //person 구조체 정의
{
    char name[50];
    char ph[50];
    char add[50];
};

int main() {
    struct person p1 ={"김철수", "010-1111-1111", "서울"}; //person 구조체 변수 p1 선언 및 초기화
    struct person p2 ={"홍준영", "010-2222-2222", "경기도"}; //person 구조체 변수 p2 선언 및 초기화

    // p1 정보 출력
    printf("첫 번째 사람 정보:\n");
    printf("이름: %s\n", p1.name);
    printf("전화번호: %s\n", p1.ph);
    printf("주소: %s\n", p1.add);

    // p2 정보 출력
    printf("\n두 번째 사람 정보:\n");
    printf("이름: %s\n", p2.name);
    printf("전화번호: %s\n", p2.ph);
    printf("주소: %s\n", p2.add);

    return 0;
}