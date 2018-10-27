#include<iostream>
#include"miya.h"
 int main(int argc, char const *argv[])
 {      
        using namespace std;
        
        //Miya xiaoyang=Miya("xiaoyang",25,160,46);
        Miya xiaoyang;
        xiaoyang.show();


        //Miya *yanlei=new Miya("yanlei",23,180,80);
        Miya *yanlei=new Miya;
        yanlei->show();

        Miya Wust ; 
        Wust.show();    
        return 0;
 }
 
 