#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100
typedef int Status;
typedef struct student{
    char no[12];
    char name[10];
    int score;
}student;
typedef student ElemType;
typedef struct SqList{
    ElemType *elem;
    int listsize;
    int length;
}SqList;
Status InitSqList(SqList &L){
    L.elem = (ElemType*)malloc(sizeof(ElemType)*MAXSIZE);
    if(!L.elem) return ERROR;
    L.listsize = MAXSIZE;
    L.length = 0;
    return OK;
}
Status InsertSqList(SqList &L,int i,ElemType e){
    int j;
    if(i<1||i>L.length + 1) return ERROR;
    if(L.length == L.listsize) return OVERFLOW;
    for(j=L.length - 1;j >= i-1;j--){
        L.elem[j+1] = L.elem[j];
    }
    L.elem[i-1] = e;
    L.length ++;
    return OK;
}
ElemType GetElem(SqList L,int i){
    return L.elem[i-1];
}
Status DeletSqList(SqList &L,int i,ElemType &e){
    int j;
    if(i<1||i>L.length) return ERROR;
    e = L.elem[i-1];
    for(j=i;j<=L.length - 1;j++){
        L.elem[j-1] = L.elem[j];
    }
    printf("位置成功移动，长度减去一:\n");
    L.length --;
    return OK;
}
int main(){
    int n,i,wz;
    student e;
    SqList L;
    printf("开始初始化学生信息表:\n");
    InitSqList(L);
    printf("成功初始化学生信息表:\n");
    printf("请输入插入的学生数量:");
    scanf("%d",&n);
    for(i = 1;i<=n;i++)
    {
        scanf("%s%s%d",e.no,e.name,&e.score);
        InsertSqList(L,i,e);
    }
    printf("显示学生信息:\n学号\t姓名\t成绩\n");
    for(i = 1;i<=n;i++){
        e= GetElem(L,i);
        printf("%s\t%s\t%d\n",e.no,e.name,e.score);
        
    }
    printf("请输入删除的位置：");
    scanf("%d",&wz);
    DeletSqList(L,wz,e);
    printf("%s\t%s\t%d\n",e.no,e.name,e.score);
}