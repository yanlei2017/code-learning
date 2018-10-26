#include "stdio.h"
#include "stdlib.h"
int main()//10¸öÊıµÄÃ°ÅİÅÅĞò
{
	int i, j, a[10],t;
	printf("please input numbers :\n");
	for (i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (i=0;i<9;i++)
	{
		for (j=0;j<9-i;j++)
		{
			if (a[j]>a[j+1])
			{
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
	printf("the sorted number is : \n");
	for (i=0;i<10;i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}