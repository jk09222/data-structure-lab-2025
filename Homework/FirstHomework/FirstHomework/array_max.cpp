#include <stdio.h>

// �ִ��� ���ϴ� �Լ�
int findMax(int arr[], int size) {
    int max = arr[0]; // ù ��° ���� �������� �ʱ�ȭ

    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main() {
    // �迭 ���� (���� �� ����)
    int arr[] = { 3, 7, 2, 9, 10, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // �ִ� ã�� �� ���
    int result = findMax(arr, size);
    printf("�ִ�: %d\n", result);

    return 0;
}
