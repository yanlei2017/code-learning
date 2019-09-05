/*
顺序容器
array(数组)、vector(向量)、deque(双端队列)、forward_list(单链表)、list(列表)

有序关联容器
set(集合)、multiset(多重集合)、map(映射)、multimap(多重映射)

无序关联容器
unordered_set (无序集合)
unordered_multiset(无序多重集合)
unordered_map(无序映射)
unorder_multimap(无序多重映射)

容器的通用功能
用默认构造函数构造空容器
支持关系运算符:==、!=、<、<=、>、>=
begin()、end():获得容器首、尾迭代器
clear():将容器清空
empty():判断容器是否为空
size():得到容器元素个数
s1.swap(s2):将s1和s2两容器内容交换相关数据类型(S表示容器类型)
S::iterator:指向容器元素的迭代器类型
S::const_iterator:常迭代器类型

对可逆容器的访问
STL为每个可逆容器都提供了逆向迭代器,逆向迭代器可以通过下面的成员函数得
到:rbegin() :指向容器尾的逆向迭代器
rend():指向容器首的逆向迭代器

逆向迭代器的类型名的表示方式如下:
S::reverse_iterator:逆向迭代器类型
S::const_reverse_iterator:逆向常迭代器类型

随机访问容器
随机访问容器支持对容器的元素进行随机访问
s[n]:获得容器s的第n个元素
*/

#include<iostream>
#include<list>
#include<deque>
#include<iterator>
using namespace std;
template<class T>
void printContainer(const char* msg,const T& s){
    cout<<msg<<": ";
    copy(s.begin(),s.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    deque<int> s;
    for (int i = 0; i <10; i++)
    {
        int x;
        cin>>x;
        s.push_front(x);
    }
    printContainer("deque s at first",s);
    list<int> l(s.rbegin(),s.rend());//用s容器的内容的逆序构造列表容器l
    printContainer("用s容器的内容的逆序构造列表容器l,l at first = ",l);

    list<int>::iterator iter=l.begin();
    while (iter!=l.end())//将列表容器l的每相邻两个元素顺序颠倒
    {
        /*example A B C D*/
        int v=*iter;//保存当前数 A
        iter=l.erase(iter);//erase删除迭代器位置处的单个字符(A), 并返回下个元素的迭代器(B)
        l.insert(++iter,v);//C之前插入A   B A C D  iter=C
    }
    printContainer(" 将列表容器l的每相邻两个元素顺序颠倒 list at last = ",l);
    s.assign(l.begin(),l.end());
    printContainer("用列表容器l的内容给s赋值,将s输出 deque at last",s);
    
    return 0;
}
