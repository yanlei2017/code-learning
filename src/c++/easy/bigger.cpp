#include <iostream>

using namespace std;

int bigger_int(int,int);

int main()
{
	int a,b;
	cout<<"enter 2 int number"<<endl<<"a:"<<endl;
	cin>>a;
	cout<<"b:"<<endl;
	cin>>b;
	cout<<"the bigger number is: "<< bigger_int(a,b)<<endl;
	return 0;
	
}

int bigger_int(int a,int b)
{
	return a>b?a:b;
	
}