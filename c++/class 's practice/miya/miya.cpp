#include<iostream>
#include "miya.h"

/* Miya::Miya()
    {
        name="no name";
        age=0;
        weight=0;
        height=0;
    }

     Miya::Miya( std::string name_,unsigned int age_,unsigned int height_,unsigned int weight_)
    {
        name=name_;
        age=age_;
        height=height_;
        weight=weight_;
    }
 */
    void Miya::show() const
    {   
        using namespace std;
        cout<<name<<"'s name ："<<name<<endl;
        cout<<name<<"'s age ： "<<age<<" years old "<<endl;
        cout<<name<<"'s weight ："<<weight<<" kg "<<endl;
        cout<<name<<"'s height ："<<height<<" cm "<<endl;
    }