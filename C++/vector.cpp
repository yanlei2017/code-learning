#include <iostream>
#include <vector>
#include <array>

//vector包含在名称空间std中,动态数组，使用new delete管理内存，效率比数组低，元素个数可为变量
//长度固定，使用栈，静态内存分配，效率与数组相同，元素个数不能为变量

using namespace std;

int main(void)
{
	int arr[5]={1,2,3,4,5};
	int vector_num;
	cin>>vector_num;
	vector<int> vt(vector_num);//vector_num为变量
	vector<int> vt1(5);
	cout<<"enter vector number to vt[]"<<endl;
	for(int i=0;i<vector_num;i++)
	{
		cin>>vt[i];
	}
	vt1=vt;//vector可以直接用等号复制
	cout<<"  vt1=vt   "<<endl;
	cout<<"  array<int,5> ay1={1,2,3,4,5}   "<<endl;
	array<int,5> ay1={1,2,3,4,5};
	array<int,5> ay2;
	cout<<"  ay2=ay1;   "<<endl;
	ay2=ay1;
	for(int i=0;i<vector_num;i++)
	{
		cout<<"the vt["<<i<<"] value is : "<<vt[i]<<endl;
		cout<<"the address of vt["<<i<<"] value is : "<<&vt[i]<<endl;
		cout<<"the vt1["<<i<<"] value is : "<<vt[i]<<endl;
		cout<<"the address of vt1["<<i<<"] value is : "<<&vt1[i]<<endl;
	}
	cout<<"sizeof(ay1)="<<sizeof(ay1)/sizeof(ay1[0])<<endl;
	cout<<"sizeof(arr)="<<sizeof(arr)/sizeof(arr[0])<<endl;
	for(int i=0;i<sizeof(ay1)/sizeof(ay1[0]);i++)
	{
		cout<<"the ay1["<<i<<"] value is : "<<ay1[i]<<endl;
		cout<<"the address of ay1["<<i<<"] value is : "<<&ay1[i]<<endl;
		cout<<"the ay2["<<i<<"] value is : "<<ay2[i]<<endl;
		cout<<"the address of ay2["<<i<<"] value is : "<<&ay2[i]<<endl;

	}
	return 0;
}
