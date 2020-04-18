#include <stdio.h>
int main()
{
	void swap(int *p1,int *p2);
	int a, b, *pointer1, *pointer2;
	printf("please input two number: a,b \n");
	scanf("%d,%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	pointer1 = &a;
	pointer2 = &b;
	if (a<b)
	{
		swap(pointer1, pointer2);
	}
	printf("Max=%d  Min=%d\n" ,*pointer1, *pointer2);
	system("pause");
	return 0;
}
void swap(int * p1, int * p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}