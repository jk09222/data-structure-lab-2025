#include <stdio.h>

// 최댓값을 구하는 함수
int findMax(int arr[], int size) {
    int max = arr[0]; // 첫 번째 값을 기준으로 초기화

    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main() {
    // 배열 선언 (직접 값 지정)
    int arr[] = { 3, 7, 2, 9, 10, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // 최댓값 찾기 및 출력
    int result = findMax(arr, size);
    printf("최댓값: %d\n", result);

    return 0;
}
