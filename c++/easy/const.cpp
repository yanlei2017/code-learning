#include<iostream>

using namespace std;

int main(void)
{
	int age=18;
	const int *p=&age;
	//(*p)++;  //error
	age++;
	cout<<age<<endl;
	int * const pp=&age;//此处申明的const pp可以修改
	(*pp)++;
	cout<<age<<endl;
	return 0;
}
