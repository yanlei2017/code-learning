#include "stdio.h"
#include "stdlib.h"
int main()
{
	int year, leap;
	printf("Enter year:\n");
	scanf("%d", &year);
	if (year%4==0)
	{
		if (year%100==0)
		{
			if (year%400==0)
			{
				leap = 1;
			} 
			else
			{
				leap = 0;
			}
		} 
		else
		{
			leap = 1;
		}
	} 
	else
	{
		leap = 0;
	}
	if (leap==1)//if ��leap��
	{
		printf("%d��������\n", year);
	} 
	else
	{
		printf("%d�겻������\n",year);
	}
	system("pause");
	return 0;
}