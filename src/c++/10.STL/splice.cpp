#include<algorithm>
#include<vector>
#include<deque>
#include<iostream>
#include<iterator>
#include<string>
#include<list>
using namespace std;
int main(int argc, char const *argv[])
{
    string name1[]={"a","b","c","d"};
    string name2[]={"e","f","g","h"};
    list<string> s1(name1,name1+sizeof(name1)/sizeof(name1[1]));
    list<string> s2(name2,name2+sizeof(name2)/sizeof(name2[1]));
    s2.splice(s2.end(),s1,s1.begin());//将s1的第一个元素放到s2的最后
    /*
    s1 = b c d
    s2 = e f g h a
    */
    list<string>::iterator iter1=s1.begin();
    advance(iter1,2);//*iter="d" iter1前进2个元素
    list<string>::iterator iter2=s2.begin();
    ++iter2;// *iter2="f" iter2前进1个元素
    list<string>::iterator iter3=iter2;
    advance(iter3,2);// *iter3="g" iter3前进2个元素
    s1.splice(iter1,s2,iter2,iter3);//将[iter2, iter3)范围内的结点接到s1中iter1指向的结点 前
    /*
    s1=b c f g d
    s2=e h a
    */
    copy(s1.begin(),s1.end(),ostream_iterator<string>(cout," "));
    cout<<endl;
    copy(s2.begin(),s2.end(),ostream_iterator<string>(cout," "));
    cout<<endl;    
    return 0;
}
