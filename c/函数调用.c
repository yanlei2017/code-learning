#include "stdio.h"
#include "stdlib.h"
void main()
{
	float add(float x,float y);//�Ե��ú��������������ӡ�����
	float a, b;
	printf("please input two number\n");
	scanf("%f,%f", &a,& b);
	printf("the sum is  %f", add(a, b));
	system("pause");
}

float add(float x, float y)//�Ժ���add�������ж��壬�ޡ�����
{
	return x+y;
}

