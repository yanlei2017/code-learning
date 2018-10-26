#include<iostream>
#include"stock00.h"
int main(int argc, char const *argv[])
{
    Stock miya;
    miya.acquire("Nanosmart",20,12.50);
    miya.show();
    miya.buy(15,18.125);
    miya.show();
    miya.sell(400,20.00);
    miya.show();
    miya.buy(30000,40.125);
    miya.show();
    miya.sell(30000,0.125);
    miya.show();
    return 0;
}
