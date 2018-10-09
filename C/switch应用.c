#include <stdio.h>
#include "stdlib.h"
void function1(int x, int y)
{
	printf("x+y=%d\n", x + y);
}
void function2(int x, int y)
{
	printf("x*y=%d\n", x*y);
}
int main(void)
{
	void function1(int x, int y);
	void function2(int x, int y);
	int x, y;
	char opcode, eat_space;
	printf("请按以下格式输入2个数字：num1，num2\n");
	scanf("%d,%d", &x, &y);
	printf("请输入操作码，输入A计算和，输入B计算乘积\n");
	fflush(stdin);
	scanf("%c%c", &eat_space,&opcode);
	//scanf("%c", &opcode);
	switch (opcode)
	{
	case 'A':function1( x,  y);break;
	case 'B':function2( x,  y); break;
	default:printf("输入错误\a\n");
	}
	system("pause");
	return 0;
}
