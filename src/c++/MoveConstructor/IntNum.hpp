#ifndef __INT_NUM__H
#define __INT_NUM__H

class IntNum
{
private:
    int *xptr;

public:
    IntNum(int x);
    IntNum(IntNum &v);//复制构造函数
    IntNum(IntNum &&n);//移动构造函数
    int getint();
    ~IntNum();
    void ChangeNum(int x);
};

IntNum GetNum();
#endif