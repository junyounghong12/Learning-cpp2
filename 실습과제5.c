#include <stdio.h>
#include <string.h>

struct student //student 구조체 정의
{
    char name[50];
    int id;
    double score;
    char major[50];
    char path[50];
};

int main() {
    struct student p[10] ={
        { "김철수", 20231101, 3.6, "수학", "교수"},
        { "김현수", 20231102, 3.8, "화학", "선생님"},
        { "김민수", 20231103, 3.5, "물리", "과학자"},
        { "김진수", 20231104, 3.7, "생명", "연구자"},
        { "이선희", 20231105, 3.4, "컴퓨터", "엔지니어"},
        { "우지수", 20231106, 3.9, "영어", "선생님"},
        { "이민기", 20231107, 3.2, "국어", "작가"},
        { "권현기", 20231108, 3.3, "패션", "디자이너"},
        { "홍길동", 20231109, 3.1, "미디어", "방송피디"},
        { "홍준영", 20231110, 3.4, "전자공학", "엔지니어"}
    }; //student 정보 초기화

    //student 정보 출력
    printf("학생 정보 출력:\n");
    for(int i=0; i<10; i++){
        printf("학생 %d 정보:\n", i+1);
        printf("이름: %s\n", p[i].name);
        printf("학번: %d\n", p[i].id);
        printf("평균 평점: %.2lf\n", p[i].score);
        printf("학과: %s\n", p[i].major);
        printf("진로: %s\n", p[i].path);
        printf("\n");
    }
    return 0;
}