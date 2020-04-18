#include<iostream>

using namespace std;

void f(int *p)
{
	*p=200;
}

int c(int a)
{
	a=100;
	return a;
}

void c1(int a)
{
	a=100;
}

int main(void)
{
	int * a= new int;//一定要在定义指针的时候把指针初始化为一个确定的地址
	int * b=(int *)malloc(sizeof(int));
	a[0]=1;
	b[0]=2;
	cout<<a[0]<<endl;
	cout<<b[0]<<endl;
	f(b);
	cout<<a[0]<<endl;
	cout<<b[0]<<endl;
	delete a;
	free(b);
	cout<<a[0]<<endl;
	cout<<b[0]<<endl;
	int aa=10;
	//aa=c(aa);
	c1(aa);
	cout<<endl<<aa<<endl;
	return 0;
}
