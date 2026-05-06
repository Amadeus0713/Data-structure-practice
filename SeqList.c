#include<stdio.h>
#define MAXSIZE 100
#define ERROR 0
#define OK 1
typedef int ElemType;

typedef struct{
	int length;
	int data[MAXSIZE];
}SeqList;

void InitList(SeqList *L)
{
	L->length = 0;
	printf("初始化成功！\n");
	fflush(stdout);
}

int main(void)
{
	SeqList L;
	InitList(&L);
	return 0;
}
