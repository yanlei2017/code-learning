
#include <bits/stdc++.h>
/*使用局部静态对象来解决存在的两个问题*/
using namespace std;
class fc
{
private:
    fc(){cout << "constructor" << endl;}
    ~fc(){cout << "destructor" << endl;}

public:
    static fc *ShareInstance();
};

fc *fc::ShareInstance()
{
    static fc fc;
    return &fc;
}

class AA
{
private:
    int n1;
    int n2;
public:
    AA(/* args */):n2(1),n1(n2+2){};
    void printdd(){cout<<n1<<" "<<n2<<endl;}
};


int main(int argc, char const *argv[])
{
    AA A;
    A.printdd();
    fc *s=fc::ShareInstance();
    fc *s1=fc::ShareInstance();
    cout<<s<<endl;
    cout<<s1<<endl;
    long long a=powl(2,100);
    cout<<a%7<<endl;
    int aaaa[5]={1,2,3,4,5};
    int *ptr=(int *)(&aaaa+1);
    cout<<*(ptr-1);
    unsigned char ii=10;
    int j=0;
    for ( ; ii >0; ii-=3)
    {
        ++j;
        /* code */
    }
    cout<<j<<"ggg"<<endl;
    float yy;
    yy++;
    cout<<sizeof(int *)<<" "<<sizeof(char *)<<endl;
    return 0;
}

