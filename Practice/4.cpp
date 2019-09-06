/*
题目描述
•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组； 
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。 
输入描述:
连续输入字符串(输入2次,每个字符串长度小于100)

输出描述:
输出到长度为8的新字符串数组

示例1
输入
复制
abc
123456789
输出
复制
abc00000
12345678
90000000

*/

#include <string>
#include <deque>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<char> input;
int main(int argc, char const *argv[])
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int s1size = s1.size();
    int s2size = s2.size();
    int a1 = s1size / 8;
    int a2 = s2size / 8;
    bool s1b = (s1size % 8 == 0);
    bool s2b = (s2size % 8 == 0);
    
    if (s1size < 8)
    {
        cout << s1;
        for (int i = 0; i < 8 - s1size; i++)
        {
            cout << '0';
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < s1size; i++)
        {
            if (i % 8 == 0 && i != 0)
            {
                cout << endl;
            }
            cout << s1[i];
        }
        for (int j = 0; j < (8 - s1size % 8)&&!s1b; j++)
        {
            cout << '0';
        }
        cout << endl;
    }

    if (s2size < 8)
    {
        cout << s2;
        for (int i = 0; i < 8 - s2size; i++)
        {
            cout << '0';
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < s2size; i++)
        {
            if (i % 8 == 0 && i != 0)
            {
                cout << endl;
            }
            cout << s2[i];
        }

        for (int j = 0; j < (8 - s2size % 8)&&!s2b; j++)
        {
            cout << '0';
        }
        cout << endl;
    }

    return 0;
}
