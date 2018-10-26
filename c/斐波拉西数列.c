#include "stdio.h"
#include "stdlib.h"
int main()
{
	int i, n,f[20] = { 1,1 };
	for (i=2;i<=20;i++)
	{
		f[i] = f[i - 2] + f[i - 1];
	}
	for (i=0;i<20;i++)
	{
			printf("%10d", f[i]);
			printf("\t");
			//int j;
			//j = i + 1;//这个j是为了使第一行没有换行符，如果直接判断j%5==0则第一行会输出换行符
			if ((i+1)%5==0)
			{
				printf("\n");
			}
	}
	system("pause");
	return 0;
}