#include<iostream>
#include<cmath>
#include <stdlib.h> 
using namespace std;

const double degtorad=atan(1.0)/45.0;

const double radtodeg=45.0/atan(1.0);

int main(int argc, char const *argv[])
{
    double temp[argc];
    if(argc<2)
    {
        cout<<"usage : asin x , x can be any value form -1 to 1"<<endl;
        return 0;
    }
    else
        for(int i=0;i<argc;i++)
    {
        temp[i]=atof(argv[i]);
    }
    cout<<"asin( "<<temp[1]<<" ) is : "<< radtodeg * asin(temp[1]) <<"°"<<endl;

    return 0;
}



