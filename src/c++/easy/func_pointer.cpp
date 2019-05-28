#include <iostream>
using namespace std;

const double * f1(const double ar[],int n);//f1返回一个 const double *的指针，其实就是double值存储的地址
const double * f2(const double []  ,int );
const double * f3(const double *   ,int );

int main()
{
	double av[3]={1112.3,1542.6,2227.9};
	const double * (*p1)(const double *,int)=f1;//定义一个const double *指针指向f1
	auto p2=f2;

	cout<<"Using pointers to functions :\n";
	cout<<"Address   Value\n";
	cout<<(*p1)(av,3)<<": "<<*(*p1)(av,3)<<endl;//(*p1)(av,3)返回值为指针，即函数地址，*(*p1)(av,3)为取值符号，取地址指向的值
	cout<< p2(av,3)<<": "<<*p2(av,3)<<endl;


	const double * (*pa[3])(const double *,int)={f1,f2,f3};//定义一个指针数组pa，数组中的每一个指针 指向一个返回值为 const double * 的函数指针
	//*pa[3]表明了pa是一个包含三个指针的数组
	auto pb=pa;//pb为pa的第一个值，自动类型推断只能用于 单值 初始化，不能用于初始化列表

	cout<<"\nUsing an array of pointers to function : \n";
	cout<<" Address   Value \n";
	
	for(int i = 0; i < 3; i++)
	{
		cout<<pa[i](av,3)<<": "<<*pa[i](av,3)<<endl;
	}
	


	cout <<"\nUsing a pointer to a pointer to a function :\n";
	cout <<"Address   Value \n";
	for(int i = 0; i < 3; i++)
	{
		cout<<pb[i](av,3)<<": "<<*pb[i](av,3)<<endl;
	}
	


	cout <<"\nUsing  pointers to an array of pointers :\n";
	cout <<"Address   Value \n";
	auto pc =&pa;//pa是一个指针数组，数组中的每个元素指向一个函数指针，这里去pa的地址，即数组的地址给到pc，pc存储的是地址

	cout<<(*pc)[0](av,3)<<": "<<*(*pc)[0](av,3)<<endl; //(*pc)对地址引用，(*pc)[0]为pa的第一个元素，即f1

	
	const double * (*(*pd)[3])(const double *,int)=&pa;//(*pd)[3]表明一个指针pd指向一个包含3个元素的数组，然后取了数组里面的值，这里数组里面放的是pa的地址
	const double * pdb=(*pd)[1](av,3);//取数组中的第2个值，这个值是函数指针
	cout<<pdb<<": "<<*pdb<<endl;
	cout<< (*(*pd)[2]) (av,3) <<": " << *(*(*pd)[2])(av,3)<<endl;
	//(* (*pd)[2]) 取函数指针指向的函数，函数返回的是一个double const * ，  * (*(*pd)[2])(av,3)，取返回的指针里面的值
	system("pause");
	return 0;

}

const double * f1(const double * ar,int n)
{
	return ar;
}
const double * f2(const double ar[]  ,int )
{
	return ar+1;
}
const double * f3(const double ar[]  ,int )
{
	return ar+2;
}