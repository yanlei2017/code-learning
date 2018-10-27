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
	string ch;
	int count=0;
	cout<<"enter"<<endl;
	//cin>>ch;
	while(ch !="#")
	{   
		cin>>ch;
		cout<<ch;
		++count;
		//cin>>ch;
	}
	cout<<endl<<count<<"charactors read \n";
	return 0;
}