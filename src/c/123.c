#include "stdio.h"

void bubble_sort(int *a,int n)
{
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j = i;j < n;j++)
		{
			if(*(a+i)>*(a+j))
			{
				int temp;
				temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
			}
		}
	}
	
	
int main()
{
	int group_num,stu_num,grade_avr,grade[stu_num*group_num];
	cin>>group_num;
	cin>>stu_num;
	cin>>grade_avr;
	
	for(int i=1;i<group_num;i++)
	{
		for(int j=1;j<stu_num,j++)
		cin>>grade[i*j];
	}
	
	int total_grade[group_num*stu_num];
	for(int k=0,k<group_num*stu_num,k++)
	{
		
		total_grade+=grade(i);
	}
	
	bubble_sort(grade,group_num*stu_num);
	for(int h=0,h<group_num*stu_num,h++)
	{
		grade[h]=100;
		for(int l=0,l<group_num*stu_num,l++)
	{
		
		to
	}
		
	}
	
}
