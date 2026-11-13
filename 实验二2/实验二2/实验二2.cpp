#include <stdio.h>
#define N 40

int main() {
    long long f[N];
    int i;
    f[0] = 1;
    f[1] = 1;

    for (i = 2; i < N; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    printf("Fibonacciǰ40�\n");
    for (i = 0; i < N; i++) {
        printf("%12lld", f[i]);
        if ((i + 1) % 4 == 0)
            printf("\n");
    }
    return 0;
}

