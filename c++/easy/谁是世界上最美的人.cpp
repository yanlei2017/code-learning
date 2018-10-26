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
	    // 控制台显示乱码纠正


	cout<<"谁是世界上最美的人？"<<endl;
	///*
	string name;//string可以自动new以节省内存
	cin>>name;
	//cout<<"your name is : "<<name<<endl;
	for(int i=1;i;i++)
	{
	if(name=="姚凤琳")
	{
		cout<<"还是你有眼光！^-^"<<endl;
		break;
	}
	else
	{	cout<<"神他妈的,答错了，重新答!!"<<endl;
		cin>>name;;
	}
	}
	system("pause");
	//*/
	return 0;
}