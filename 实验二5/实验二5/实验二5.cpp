#include <stdio.h>
#define N 3

int main() {
    int a[N][N] = {1,2,3,4,5,6,7,8,9};
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            a[i][j] = a[i][j] + a[j][i];
            a[j][i] = a[i][j];
            a[i][j] = 0;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}