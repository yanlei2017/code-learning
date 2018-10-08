#include "stdio.h"
#include "stdlib.h"
void main()
{
	float add(float x,float y);//对调用函数进行声明，加“；”
	float a, b;
	printf("please input two number\n");
	scanf("%f,%f", &a,& b);
	printf("the sum is  %f", add(a, b));
	system("pause");
}

float add(float x, float y)//对函数add（）进行定义，无“；”
{
	return x+y;
}

