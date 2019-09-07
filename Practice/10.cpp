/*题目描述
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)。不在范围内的不作统计。

输入描述:
输入N个字符，字符在ACSII码范围内。

输出描述:
输出范围在(0~127)字符的个数。

示例1
输入
复制
abc
输出
复制
3
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    string a;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (0 < s[i] && s[i] < 127)
        {
            a.push_back(s[i]);
        }
    }
    sort(a.begin(), a.end(), less<char>());
    a.erase(unique(a.begin(), a.end()), a.end());
    cout << a.size();
    return 0;
}
