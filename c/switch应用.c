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
	printf("�밴���¸�ʽ����2�����֣�num1��num2\n");
	scanf("%d,%d", &x, &y);
	printf("����������룬����A����ͣ�����B����˻�\n");
	fflush(stdin);
	scanf("%c%c", &eat_space,&opcode);
	//scanf("%c", &opcode);
	switch (opcode)
	{
	case 'A':function1( x,  y);break;
	case 'B':function2( x,  y); break;
	default:printf("�������\a\n");
	}
	system("pause");
	return 0;
}
