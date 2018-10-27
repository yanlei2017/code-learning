#include<iostream>
#include<cmath>
#include <stdlib.h> 
using namespace std;
const double degtorad=atan(1.0)/45.0;

const double radtodeg=45.0/atan(1.0);


int main(int argc, char const *argv[])
{
    int temp[argc];
    if(argc<2)
    {
        cout<<"usage : atan2 y x , y and x can be any value"<<endl;
        return 0;
    }
    else
        for(int i=0;i<argc;i++)
    {
        temp[i]=atoi(argv[i]);
    }
    cout<<"atant2(y="<<temp[1]<<", x="<<temp[2]<<") is : "<<( radtodeg * atan2(temp[1],temp[2]) )<<"°"<<endl;

    return 0;
}



