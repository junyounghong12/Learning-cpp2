#include <stdio.h>
#include <string.h>

struct professor //professor 구조체 정의
{
    char name[50];
    char ph[50];
    char add[50];
    char sub[50];
    char major[50];
};

int main() {
    struct professor p[5] = {
        { "교수님1", "01011111111", "동국대학교", "c언어기초, 계산적사고", "컴퓨터공학"},
        { "교수님2", "01011111112", "동국대학교", "화학개론, 화학실험", "화학"},
        { "교수님3", "01011111113", "동국대학교", "미적분, 통계", "수학"},
        { "교수님4", "01011111114", "동국대학교", "생물학개론, 유전학개론", "생물학"},
        { "교수님5", "01011111115", "동국대학교", "물리학개론, 물리실험", "물리학"}
    }; //professor 정보 초기화

    //professor 정보 출력
    printf("교수 정보 출력:\n");
    for (int i = 0; i < 5; i++) {
        printf("교수 %d 정보:\n", i + 1);
        printf("이름: %s\n", p[i].name);
        printf("전화번호: %s\n", p[i].ph);
        printf("주소: %s\n", p[i].add);
        printf("담당 과목: %s\n", p[i].sub);
        printf("학과: %s\n", p[i].major);
        printf("\n");
    }
    return 0;
}