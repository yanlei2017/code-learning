#include<iostream>
#include<string>
using namespace std;

string version1(const string & s1,const string & s2);
const string &version2(string &s1,const string &s2);
const string & version3(string &s1,const string &s2);
int main(void)
{
	string input;
	string copy;
	string result;
	unsigned int u=-10;

	cout<<"enter string"<<endl;
	getline(cin,input);
	copy=input;
	cout<<"your string as entered: "<<input<<endl;
	result=version1(input,"***");
	cout<<"string   changed:  "<<result<<endl;
	cout<<"original string : "<<input<<endl;

	result=version2(input,"***");
	cout<<"string   changed:  "<<result<<endl;
	cout<<"original string : "<<input<<endl;

	cout<<"reset string "<<endl;
	input=copy;
	result=version3(input,"***");
	cout<<"string   changed:  "<<result<<endl;
	cout<<"original string : "<<input<<endl;
	system("pause");
	
	return 0;
}

string version1(const string & s1,const string & s2)
{
	string temp;
	temp=s2+s1+s2;
	return temp;
}

const string &version2(string &s1,const string &s2)
{
	s1=s2+s1+s2;
	return s1;
}

const string & version3(string &s1,const string &s2)
{
	string temp;//局部变量
	temp=s1+s2+s1;
	return temp;//error 返回已经释放的变量
}