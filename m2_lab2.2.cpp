#include <stdio.h>
#include <stdlib.h>
#include <clocale>

int main() {
    setlocale(LC_ALL, "ukr");

    int N;
    printf("Введiть розмiр масиву: ");
    scanf_s("%d", &N);

    int* A = (int*)malloc(N * sizeof(int));

    printf("Введiть елементи масиву:\n");

    for (int i = 0; i < N; i++) {
        printf("Елемент %d: ", i + 1);
        scanf_s("%d", &A[i]);
    }
    
    // Внутрішній цикл для обміну елементів
    for (int i = 0; i < N / 2; i++) {
        int t = A[i];
        A[i] = A[N - 1 - i];
        A[N - 1 - i] = t;
    }

    printf("Масив пiсля обмiну:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    // Звільнення виділеної пам'яті
    free(A);

    return 0;
}
