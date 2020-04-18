/*
题目描述
写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。

输入描述:
第一行输入一个有字母和数字以及空格组成的字符串，第二行输入一个字符。

输出描述:
输出输入字符串中含有该字符的个数。

示例1
输入

ABCDEF
A
输出

1


*/

#include <iostream>
#include <map>
#include <cctype>
#include <string>
#include <vector>
using namespace std;
int main()
{
    // map<char, int> s;
    char c;
    string input;
    vector<char> in;
    cin >> input;
    cin >> c;
    c=tolower(c);
    unsigned int count;
    //用来存储字母出现次数的映射
    //存储输入字符/*  */
    for (int i = 0; i < input.size(); i++)
    {
        if (isalpha(input.at(i)))
        { //判断是否是字母
            input.at(i)=tolower(input.at(i));
            in.push_back(input.at(i));
        }
    }
    for (int i = 0; i < in.size(); i++)
    {
        if (in.at(i) == c)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}