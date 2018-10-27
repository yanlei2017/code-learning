#include<iostream>

using namespace std;

int main(void)
{
	int data=10;
	int & alias=data;
	cout<<"data: "<<data<<" address: "<<&data<<endl;
	cout<<"alias: "<<alias<<" address: "<<&alias<<endl;

	data++;
	cout<<"\n data++ \n";
	cout<<"data: "<<data<<" address: "<<&data<<endl;
	cout<<"alias: "<<alias<<" address: "<<&alias<<endl;
	cout<<"\n alias++ \n";
	cout<<"data: "<<data<<" address: "<<&data<<endl;
	cout<<"alias: "<<alias<<" address: "<<&alias<<endl;
	system("pause");
	return 0;
}
