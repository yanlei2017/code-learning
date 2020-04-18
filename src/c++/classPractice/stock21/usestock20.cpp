#include <iostream>
#include "stock20.h"

const int NUM=4;
int main(int argc, char const *argv[])
{
    using namespace std;
    Stock stocks[NUM]={
        Stock("360",12,20.0),
        Stock("tencent",13,20.0),
        Stock("alibaba",14,20.0),
        Stock("baidu",15,20.0),
    };
    cout<<"stock holds:"<<endl;
    for(int i=0;i<NUM;i++)
        stocks[i].show();  
    const Stock *top=&stocks[0];
    
    for(int i = 1 ; i < NUM; i++)
        top=&top->topval(stocks[i]);
    cout<<"\n most valueable holding:\n";
    top->show();
    
    return 0;
}
