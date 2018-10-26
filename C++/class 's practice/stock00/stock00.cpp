#include <iostream>
#include "stock00.h"

    void Stock::acquire(const std::string &co,long n,double pr)
    {
        company=co;
        
        if (n<0) {
            std::cout<<"Num of shares cant be negative."
            <<company<<"shares set to 0\n";
            shares=0;
        }
        else
        {
            shares=n;
            share_val=pr;
            set_tot();
        }
        
    }
    void Stock::buy(long num,double price)
    {
        
        if (num<0) {
            std::cout<<"num of shares purchased cant be negative, Transaction is aborted.\n";

        }       
        else {  
           shares+=num;
           share_val=price;
           set_tot();
        }
        
    } 
    void Stock::sell(long num,double price)
    {
        using std::cout;
        
        if (num<0) {
            cout<<"number of shares sold cant be negative,transaction is aborted \n";
        }
        else if( num>shares){
            cout<<"you cant sell more than your have,transaction is aborted \n";
        }
        else{
            shares-=num;
            share_val=price;
            set_tot();
        }
        

    }
    void Stock::update(double price)
    {
        share_val=price;
        set_tot();

    }
    void Stock::show()
    {
        std::ios_base::fmtflags orig=std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
        std::streamsize prec =std::cout.precision(3);
        std::cout<<"Company: "<<company;
        std::cout<<" Shares: "<<shares<<'\n';
        std::cout<<"Share price: "<<share_val;
        std::cout.precision(2);
        std::cout<<" Total worth: "<<total_val<<'\n';
        std::cout.setf(orig,std::ios_base::floatfield);
        std::cout.precision(prec);
    }