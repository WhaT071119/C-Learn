#include <stdio.h>
#define N 10

int main() {
    int a[N] = {3, 1, 5, 2, 9, 7, 4, 8, 0, 6};
    int i, j, t;

    // 冒泡排序
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    // 输出，每行5个
    printf("排序后：\n");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
        if ((i + 1) % 5 == 0)
            printf("\n");
    }
    return 0;
}