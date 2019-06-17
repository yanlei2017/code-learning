#include<iostream>
#include "miya.h"

//  Miya::Miya()
//     {
//         name="no name";
//         age=0;
//         weight=0;
//         height=0;
//     }

    Miya::Miya( std::string name_,unsigned int age_,unsigned int height_,unsigned int weight_)
    {
        name=name_;
        age=age_;
        height=height_;
        weight=weight_;
    }
 
    void Miya::show_public() const
    {   
        using namespace std;
        cout << "this "<<(void*)this <<endl;
        cout << "age "<<(void*)&age << endl;

        cout << "height "<<(void*)&height << endl;

        cout << "weight "<<(void*)&weight << endl;
        cout << "name "<<(void*)&name << endl;

        
        cout << this->name << "'s name ：" << name << endl;
        cout<<name<<"'s age ： "<<age<<" years old "<<endl;
        cout<<name<<"'s weight ："<<weight<<" kg "<<endl;
        cout<<name<<"'s height ："<<height<<" cm "<<endl;
    }

    void Miya::show_default() { std::cout << "this is function show_default"; }
    void Miya::show_private() { std::cout << "this is function show_privatre"; }

    void Miya::show_public() { std::cout << "this is function show_public"; }
    
