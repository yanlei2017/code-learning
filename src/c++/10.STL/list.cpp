#include <algorithm>
#include <vector>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>
#include <list>
/*
列表(list)
 特点
 在任意位置插入和删除元素都很快
 不支持随机访问
 接合(splice)操作
 s1.splice(p, s2, q1, q2):将s2中[q1, q2)移动到s1中p所指向元素之前
*/
using namespace std;
int main(int argc, char const *argv[])
{
    string name1[] = {"a", "b", "c", "d"};
    string name2[] = {"e", "f", "g", "h"};
    list<string> s1(name1, name1 + sizeof(name1) / sizeof(name1[1]));
    list<string> s2(name2, name2 + sizeof(name2) / sizeof(name2[1]));
    s2.splice(s2.end(), s1, s1.begin()); //将s1的第一个元素放到s2的最后
    /*
    s1 = b c d
    s2 = e f g h a
    */
    list<string>::iterator iter1 = s1.begin();
    advance(iter1, 2); //*iter1="d" iter1前进2个元素
    list<string>::iterator iter2 = s2.begin();
    ++iter2; // *iter2="f" iter2前进1个元素
    list<string>::iterator iter3 = iter2;
    advance(iter3, 2);                  // *iter3="h" iter3前进2个元素
    s1.splice(iter1, s2, iter2, iter3); //将[iter2, iter3)范围内的结点接到s1中iter1指向的结点 前
    /*
    s1=b c f g d
    s2=e h a
    */
    copy(s1.begin(), s1.end(), ostream_iterator<string>(cout, " "));
    cout << endl;

    copy(s2.begin(), s2.end(), ostream_iterator<string>(cout, " "));

    cout << endl;
    back_insert_iterator<list<string>> b_iterator(s2);
    front_insert_iterator<list<string>> f_iterator(s2);
    b_iterator = "yanlei";
    f_iterator = "yfl";
    copy(s2.begin(), s2.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
    /*
back_inserter：创建一个使用push_back的迭代器 
inserter：此函数接受第二个参数，这个参数必须是一个指向给定容器的迭代器。元素将被插入到给定迭代器所表示的元素之前。 
front_inserter：创建一个使用push_front的迭代器（元素总是插入到容器第一个元素之前） 
由于list容器类型是双向链表，支持push_front和push_back操作，因此选择list类型来试验这三个迭代器
————————————————
版权声明：本文为CSDN博主「sherlly666」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/github_35681219/article/details/52564780*/
    list<int> lst1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lst2 = {10}, lst3 = {10}, lst4 = {10};
    copy(lst1.begin(), lst1.end(), back_inserter(lst2));
    copy(lst2.begin(), lst2.end(), ostream_iterator<int>(cout, " "));
    //lst2包含10,1,2,3,4,5,6,7,8,9
    cout << endl;

    copy(lst1.begin(), lst1.end(), inserter(lst3, lst3.begin()));
    copy(lst3.begin(), lst3.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //lst3包含1,2,3,4,5,6,7,8,9,10
    copy(lst1.begin(), lst1.end(), front_inserter(lst4));
    copy(lst4.begin(), lst4.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //lst4包含9,8,7,6,5,4,3,2,1,10
    return 0;
}
