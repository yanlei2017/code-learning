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
			//j = i + 1;//���j��Ϊ��ʹ��һ��û�л��з������ֱ���ж�j%5==0���һ�л�������з�
			if ((i+1)%5==0)
			{
				printf("\n");
			}
	}
	system("pause");
	return 0;
}