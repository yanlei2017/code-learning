#include <stdio.h>
#include "stdlib.h"
int main()
{
	float average(float array[10]);
	float score[10], aver;
	printf("������10��ѧ���ĳɼ�\n");
	int i;
	for (i= 0; i < 10; i++)
	{
		scanf("%f", &score[i]);
	}
	printf("\n");
	aver=average(score);//here is "score",but not "score[10]"
	printf("ƽ���ɼ��ǣ�%5.2f \n", aver);
	system("pause");
	return 0;

}

float average(float array[10])
{
	int i;
	float sum ,average;
	sum = array[0];
	for (i = 1; i < 10; i++)
	{
		sum = sum + array[i];
	}
	average = sum / 10;
	return(average);
}