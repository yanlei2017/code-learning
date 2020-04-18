#include<iostream>
#include<cstring>
#include<string>

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
	yanlei yaofenglin;
	cin>>yaofenglin.age;
	cout<<"yaofenglin.age="<<yaofenglin.age<<endl;
	string name="yanlei";
	string name1=R"+*("(love)")+*";
	string name2="yaofenglin ! ";
	cout<<name.size()<<endl<<name+name1+name2 <<"\n"<<endl;
	//getline(cin,name);
	cin>>name;
	cout<<name<<"\\n"<<endl;

	return 0;
}