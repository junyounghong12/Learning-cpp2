#include <stdio.h>

double* get_max(double* A, int size)
{
    double* max=&A[0]; //포인터를 첫 번째 요소로 초기화
    for (int i=1; i<size; i++){
        if (A[i] > *max) {
            max = &A[i]; //포인터를 갱신
        }
    }
    return max; //최대값 요소의 주소 반환
}

int main() {
    double arr[] ={5.7, 2.5, 3.6, 2.1, 4.9, 3.8}; //배열 초기화
    int size =sizeof(arr)/sizeof(arr[0]); //sizeof 연산자 사용, size에 6 저장

    double* max =get_max(arr, size); //함수 호출
    if (max !=NULL) {
        printf("최대값은 %.2lf이고, 해당 요소의 주소는 %p입니다.\n", *max, (void*)max);
    }
    else {
        printf("배열이 비어있다.\n");
    }
    return 0;
}