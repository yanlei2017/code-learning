#include<iostream>

using namespace std;

void display1()
{
	cout<<"yanlei"<<endl;
		cout<<"yanlei"<<endl;
}

void display2()
{
	cout<<"yfl"<<endl;
		cout<<"yfl"<<endl;
}

void displaytime(int hour,int minute)
{
	cout<<"time :"<<hour<<":"<<minute<<endl;
}
int main()
{
	cout<<"严雷"<<endl<<"武汉科技大学"<<endl;
	double distance;
	cout<<"请输入转换距离"<<endl;
	cin>>distance;
	distance=distance/200;
	cout<<distance<<endl;
	display1();
	display2();
	cout<<"enter your age"<<endl;
	int age;
	cin>>age;
	cout<<age*12<<endl;
	int hour,minute;
	cout<<"enter the number of hour :";
	cin>>hour;
	cout<<endl;
	cout<<"enter the number of min :";
	cin>>minute;
	cout<<endl;
	displaytime(hour,minute);
	
	
	
	
	return 0;
}