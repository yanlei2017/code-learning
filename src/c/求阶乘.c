#include <stdio.h>
#include <stdlib.h>
int main()
{
	int factorial(int);
	int a,b;
	while (1)
	{
		char flag, y, Y, n, N,eatspace;
		
		while (1)
		{
			printf("请输入要求阶乘的数：\n");
			fflush(stdin);
			scanf("%d",&a);
			if (0 < a&&a < 32)
			{
				break;
			}
			else
			{
				printf("Warning:输入错误，请重新输入：\n");
				continue;
			}
			
		}
		b = factorial(a);
		printf("%d 的阶乘是：%d\t***  继续使用请输入Y,退出程序请按输入N  ***\t\n", a, b);
		while (1)
		{
			rewind(stdin);
			scanf("%c", &flag);
			if (flag == 'y' || flag == 'Y')
				break;
			else if (flag == 'N' || flag == 'n')
				break;
			else
				printf("Warning:请重新输入执行指令\n");
			continue;
		}
		if (flag == 'y' || flag == 'Y')
			continue;
		else if (flag == 'N' || flag == 'n')
			break;
	}
	system("pause");
	return 0;
}

int factorial(int x)
{
	int c;
	if (x == 0 || x == 1)
	{
		c = 1;
		return (c);
	}
	else
	{
		c = factorial(x - 1)*x;
		return (c);
	}
}