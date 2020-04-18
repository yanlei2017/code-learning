
/*输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。

输入描述:
输入一个int型整数

输出描述:
按照从右向左的阅读顺序，返回一个不含重复数字的新的整数

示例1
输入
复制
9876673
输出
复制
37689*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{

    string str;
    string str1 = "";
    cin >> str;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str1.find(str[i]) == string::npos)/*如果当前的字符串在要str1中不存在*/
            // str1+=str[i];
            str1.push_back(str[i]);
    }
    cout << str1 << endl;
    return 0;
}
