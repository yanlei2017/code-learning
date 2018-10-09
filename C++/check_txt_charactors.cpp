#include<iostream>
#include<cstring>
#include<string>
#include<ctime>

using namespace std;

int main()
{
	char ch;
	int count=0;
	cout<<"please enter charactors"<<endl;
	//cin.get(ch);
	while(cin.get(ch))
	{   
		cout.put(ch);
		++count;
		//cin.get(ch);
	}
	cout<<endl<<count<<"charactors read \n";
	return 0;
}