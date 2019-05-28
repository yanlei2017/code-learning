#include<iostream>
#include<cstdlib>
#include<ctime>
#include <stdio.h> 
#include <cmath>
int aha()
{
return (int)10.5;
}
using namespace std;


int main(int argc, char * argv[])
{
	cout<<time(0)<<endl;
	srand(time(0));
	for(int i=0;i<20;i++)
	{
	    srand(time(0));
	    cout<<rand()<<endl;
	    cout<<aha();
	}

double a=1e6f;
cout<<"test:  "<<a<<endl;


bool inf=isfinite(0);
cout<<"isfinite:  "<<inf<<endl;
return 0;
	
}
