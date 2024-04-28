#include <stdio.h>

void conv(double* grades, double* scores, int s) //학점을 100점 만점으로 변환하는 함수
{
    for (int i=0; i<s; i++) {
        scores[i] =grades[i]*(100.0/4.3); //학점을 100점 만점으로 변환하여 배열 score[]에 저장
    }
}

int main() {
    double grades[] = {4.2, 3.1, 4.3, 3.5, 3.6, 3.4, 3.8, 4.1, 3.2, 3.7}; //4.3점 만점인 학생들의 평점
    double scores[10]; //100점 만점으로 변환된 점수를 저장할 배열
    conv(grades, scores, 10); //함수 호출, 학점을 100점 만점으로 변환
    printf("-변환된 점수-\n");
    for (int i=0; i<10; i++){
        printf("학생 %d: %.2lf \n", i + 1, scores[i]); //변환된 점수 출력
    }
    return 0;
}