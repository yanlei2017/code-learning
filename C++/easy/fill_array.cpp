#include<iostream>

using namespace std;
#define MAX 10
//const int MAX=10;

int fill_array(double arr[],int limits);
void show_array(const double arr[],int n);
void revalue_array (double arr[],int n,double r);

int main(void)
{
	double properties[MAX];
	int size=fill_array(properties,MAX);
	show_array(properties,size);
	if(size>0)
	{
		cout<<"enter revalue factor : ";
		double factor;
		while(!(cin>>factor))
		{
			cin.clear();
			while(cin.get() != '\n')
			{
				continue;
				cout<<"bad input , please input new number !";
			}
		}
		revalue_array(properties,size,factor);
		show_array(properties,size);
	}
	cout <<"done"<<endl;

	return 0;
}

int fill_array(double arr[],int limits)
{
	double temp;
	int i;
	for(i=0;i<limits;i++)
	{
		cout<<"enter value #"<<(i+1)<<": ";
		cin>>temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
				continue;
			cout<<"bad input, input process terminated.\n";
			break;
		}
		else if(temp<0)
				break;
		arr[i]=temp;	
	}
	return i;
}

void show_array(const double arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Properties #"<<i<<": $ " ;
		cout<<arr[i]<<endl;
	}
}

void revalue_array (double arr[],int n,double r)
{
	for(int i=0;i<n;i++)
	{
		arr[i]*=r;
	}
}