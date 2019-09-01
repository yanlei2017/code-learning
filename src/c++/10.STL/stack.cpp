#include <stack>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    stack<char> s;
    string str;
    getline(cin,str);
    for (string::iterator iter = str.begin(); iter != str.end(); iter++)
    {
        s.push(*iter);
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}
