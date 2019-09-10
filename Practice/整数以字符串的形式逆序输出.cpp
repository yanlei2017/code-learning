/*题目描述
描述：

输入一个整数，将这个整数以字符串的形式逆序输出

程序不考虑负数的情况，若数字含有0，则逆序形式也含有0，如输入为100，则输出为001


输入描述:
输入一个int整数

输出描述:
将这个整数以字符串的形式逆序输出

示例1
输入
复制
1516000
输出
复制
0006151
*/

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
    vector<string> a;
    string temp;
    while (cin >> temp)
    {
        a.push_back(temp);
    }
    vector<string>::reverse_iterator it;
    for (it=a.rbegin() ; it!=a.rend();++it)
    {
        cout<<*it<<" ";
        /* code */
    }
    
    return 0;
}