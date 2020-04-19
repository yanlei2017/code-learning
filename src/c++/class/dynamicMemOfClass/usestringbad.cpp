#include "stringbad.h"
#include<iostream>

int main(int argc, char const *argv[])
{
    stringbad yanlei("yanlei");
        std::cout<<"copy yanlei to yfl : yfl=yanlei"<<std::endl; 
    stringbad yfl=yanlei;//默认复制构造函数，stringbad(const stringbad & )

    //yfl.show_str_num();
    std::cout<<"yanlei: "<<yanlei<<std::endl;
    std::cout<<"yfl: "<<yfl<<std::endl;//在函数退出时候，会调用析构函数，yanlei被释放后， yfl再释放一遍会报错，因为yanlei已经被释放
    return 0;
}
