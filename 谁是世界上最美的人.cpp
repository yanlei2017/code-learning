#include<iostream>
#include<cstring>
#include<string>
#include<ctime>

using namespace std;

struct yanlei
{
	string name;
	unsigned int age;
	unsigned int tall;
	string address;
};
int main()
{
	    // ����̨��ʾ�������


	cout<<"˭���������������ˣ�"<<endl;
	///*
	string name;//string�����Զ�new�Խ�ʡ�ڴ�
	cin>>name;
	//cout<<"your name is : "<<name<<endl;
	for(int i=1;i;i++)
	{
	if(name=="Ҧ����")
	{
		cout<<"���������۹⣡^-^"<<endl;
		break;
	}
	else
	{	cout<<"�������,����ˣ����´�!!"<<endl;
		cin>>name;;
	}
	}
	system("pause");
	//*/
	return 0;
}