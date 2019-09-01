#include<algorithm>
#include<vector>
#include<deque>
#include<iostream>
#include<iterator>
/*
双端队列(deque)
 特点
 在两端插入或删除元素快
 在中间插入或删除元素慢
 随机访问较快,但比向量容器慢
*/
using namespace std;
int main(int argc, char const *argv[])
{
    istream_iterator<int> i1(cin),i2;
    vector<int> s1(i1,i2);
    sort(s1.begin(),s1.end());
    deque<int> s2;//双端队列
    for (vector<int>::iterator iter = s1.begin(); iter != s1.end(); iter++)
    {
        if (*iter%2==0)
        {
            s2.push_back(*iter);//偶数放到s2尾部
        }
        else
        {
            s2.push_front(*iter);//奇数放到s2首部
        }
    }
    copy(s2.begin(),s2.end(),ostream_iterator<int>(cout," "));
    cout<<endl;    
    return 0;
}
