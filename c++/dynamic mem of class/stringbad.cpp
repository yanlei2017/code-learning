#include"stringbad.h"
#include<cstring>
#include<iostream>

using std::cout;
using std::endl;

int stringbad::str_num=0;

stringbad::stringbad()
{
    str_len=4;
    str = new char[4];
    std::strcpy(str,"c++");
    str_num++;
    cout<<"str "<<str_num<<" : "<<str<<" obj created"<<endl;

}

stringbad::stringbad(const char * s)
{
    str_len=std::strlen(s);
    str=new char[str_len+1];
    std::strcpy(str,s);
    str_num++;
    cout<<"str "<<str_num<<" : "<<str<<" obj created"<<endl;
}

stringbad::~stringbad()
{
    cout<<"str "<<str_num<<" : "<<str<<" obj delete"<<endl;
    str_num--;
    delete [] str;
    cout<<str_num<<" left str"<<endl;

}


//复制构造函数
stringbad::stringbad(const stringbad & s)
{
    str_num++;
    str_len=s.str_len;
    str=new char[str_len+1];
    std::strcpy(str,s.str);
    cout<<" was copyed from "<<s.str<<endl;

}

 std::ostream & operator<<(std::ostream & os,const stringbad & st)
{
    os<<st.str;
    return os;
}

void stringbad::show_str_num()
{
    cout<<str_num<<endl;
}