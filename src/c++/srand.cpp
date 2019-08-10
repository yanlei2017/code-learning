#include<iostream>
#include<cstdlib>
#include<ctime>
#include <stdio.h> 
#include <cmath>

using namespace std;


int main(int argc, char * argv[])
{
	cout<<time(0)<<endl;
	srand(time(0));
	for(int i=0;i<5;i++)
	{
	    srand(time(0));
	    cout<<rand()<<endl;
	}

double a=1e6f;
cout<<"test:  "<<a<<endl;


bool inf=isfinite(0);
cout<<"isfinite:  "<<inf<<endl;
return 0;
	
}
