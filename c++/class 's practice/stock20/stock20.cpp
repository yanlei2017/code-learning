#include <iostream>
#include "stock20.h"

    Stock::Stock()
    {
        std::cout<<"Default constructor \n";
        company="no name";
        shares=0;
        share_val=0.0;
        total_val=0.0;
    }

    Stock::Stock(const std::string & co,long n,double pr)
    {
        std::cout<<"Constructor using "<<co<<" called\n";
        company=co;
        
        if (n<0) {
            std::cout<<"Number of shares cant be negative ;"
            <<company<<" shares set to 0.\n";
            shares=0;
        }
        else {
            shares=n;
            share_val=pr;
            set_tot();
        }
        

    }

    Stock::~Stock()
    {
        std::cout<<"Bye "<<company<<"!\n";
    }
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
    void Stock::show() const
    {
        std::ios_base::fmtflags orig=std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
        std::streamsize prec =std::cout.precision(3);
        std::cout<<"Company: "<<company;
        std::cout<<" Shares: "<<shares<<'\n';
        std::cout<<"Share price: $"<<share_val;
        std::cout.precision(2);
        std::cout<<" Total worth: $ "<<total_val<<'\n';
        std::cout.setf(orig,std::ios_base::floatfield);
        std::cout.precision(prec);
    }

    const Stock & Stock::topval(const Stock & s) const
    {
        if(s.total_val>total_val)
        return s;
        else
        return *this;
    }

    Miya::Miya()
    {
        name="no name";
        age=0;
        weight=0;
        height=0;
    }

     Miya::Miya(const std::string &name_,unsigned int age_,unsigned int height_,unsigned int weight_)
    {
        name=name_;
        age=age_;
        height=height_;
        weight=weight_;
    }

    void Miya::show() const
    {   
        using namespace std;
        cout<<name<<"'s name ："<<name<<endl;
        cout<<name<<"'s age ： "<<age<<" years old "<<endl;
        cout<<name<<"'s weight ："<<weight<<" kg "<<endl;
        cout<<name<<"'s height ："<<height<<" cm "<<endl;
    }