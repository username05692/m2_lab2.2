#include <stdio.h>
#include <stdlib.h>
#include <clocale>

int main() {
    setlocale(LC_ALL, "ukr");

    int N;
    printf("����i�� ����i� ������: ");
    scanf_s("%d", &N);

    int* A = (int*)malloc(N * sizeof(int));

    printf("����i�� �������� ������:\n");

    for (int i = 0; i < N; i++) {
        printf("������� %d: ", i + 1);
        scanf_s("%d", &A[i]);
    }
    
    // �������� ���� ��� ����� ��������
    for (int i = 0; i < N / 2; i++) {
        int t = A[i];
        A[i] = A[N - 1 - i];
        A[N - 1 - i] = t;
    }

    printf("����� �i��� ���i��:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    // ��������� ������� ���'��
    free(A);

    return 0;
}
