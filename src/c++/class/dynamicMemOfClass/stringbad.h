#include<iostream>
#ifndef STRINGBAD_H_
#define STRINGBAD_H_


class stringbad{
    private:
    char * str;
    int str_len;
    static int str_num;
    

    public:

    stringbad();
    stringbad(const char * s);
    ~stringbad();
    void show_str_num();
    stringbad(const stringbad &);

    friend std::ostream & operator<<(std::ostream & os,const stringbad & st);
};



#endif