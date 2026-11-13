#include <stdio.h>
int main() {
	int n,i,num,min;
	printf("输入数的个数:");
	scanf("%d", &n);
    printf("输入第1个数：");
    scanf("%d", &min);

    for (i = 2; i <= n; i++) {
        printf("输入第%d个数：", i);
        scanf("%d", &num);
        if (num < min) {
            min = num;
        }
    }
    printf("最小值是：%d\n", min);
    return 0;
}