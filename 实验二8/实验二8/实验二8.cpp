#include <stdio.h>
int main() {
    int a[10]={1,3,5,7,9};
    int n=5,x,i,j;
    printf("请输入要插入的数：");
    scanf("%d",&x);
    // 找插入位置
    for(i=0; i<n; i++){
        if(x<a[i]) break;
    }
    // 后移
    for(j=n; j>i; j--){
        a[j]=a[j-1];
    }
    a[i]=x; n++;
    // 输出
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}