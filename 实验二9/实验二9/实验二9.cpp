#include <stdio.h>
int main() {
    char s[20];
    int num=0,i=0;
    printf("输入数字字符串：");
    scanf("%s",s);
    while(s[i]!='\0'){
        num=num*10 + (s[i]-'0');
        i++;
    }
    printf("转换后的整数：%d\n",num);
    return 0;
}