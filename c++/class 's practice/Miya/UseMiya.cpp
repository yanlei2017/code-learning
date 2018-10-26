#include<iostream>
#include"Miya.h"
 int main(int argc, char const *argv[])
 {      
        using namespace std;
        Miya xiaoyang=Miya("xiaoyang",25,160,46);
        xiaoyang.show();


        Miya *yanlei=new Miya("yanlei",23,180,80);
        yanlei->show();

        Miya Wust ; 
        Wust.show();    
        return 0;
 }
 
 