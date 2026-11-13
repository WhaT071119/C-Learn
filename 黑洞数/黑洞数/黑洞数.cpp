#include <stdio.h>
int main() {
    int n, a, b, c, max, min, temp;
    printf("输入一个三位数：");
    scanf("%d", &n);

    while (1) {
        // 拆出个位十位百位
        a = n / 100;
        b = n / 10 % 10;
        c = n % 10;

        // 排序求最大最小
        if (a < b) { temp = a; a = b; b = temp; }
        if (a < c) { temp = a; a = c; c = temp; }
        if (b < c) { temp = b; b = c; c = temp; }
        max = a * 100 + b * 10 + c;
        min = c * 100 + b * 10 + a;

        n = max - min;
        printf("%d - %d = %d\n", max, min, n);
        if (n == 495) break;
    }
    return 0;
}