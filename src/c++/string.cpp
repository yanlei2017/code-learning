#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s1, s2;
    s1 = "yanleia";
    s2 = "yanleia";
    string s3 = s1 + s2;
    if (s1 < s2)
    {
        cout << "s1<s2" << endl;
    }
    if (s1 == s2)
    {
        cout << "s1=s2" << endl;
    }
    if (s1 > s2)
    {
        cout << "s1>s2" << endl;
    }

    system("pause");
    return 0;
}
