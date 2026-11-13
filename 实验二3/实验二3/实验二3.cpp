#include <stdio.h>
int main() {
    int n, i = 0, j;
    char s[20];
    printf("ÇëÊäÈëÕûÊý£º");
    scanf("%d", &n);

    while (n > 0) {
        s[i++] = n % 10 + '0';
        n = n / 10;
    }
    s[i] = '\0';

    printf("µ¹Ðò×Ö·û´®£º%s\n", s);
    return 0;
}