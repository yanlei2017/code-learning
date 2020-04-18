#include<iostream>
#include "enum.h"
 using namespace std;
int main(int argc, char const *argv[])
{
    egg_old one=small;
    egg two=egg::medium;

   
    cout<<(int)one<<(int)two<<endl;
    return 0;
}
