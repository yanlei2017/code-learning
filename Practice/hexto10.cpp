#include <iostream>
using namespace std;
#include <string>
#include <cmath>
int main(int argc, char const *argv[])
{
    string s;
    while (getline(cin, s))
    {

        int len = s.length();
        int sum = 0;
        for (int i = len - 1; i >= 0; i--)
        {

            if ('0' <= s[i] && s[i] <= '9')
            {
                sum += (s[i] - 48) * pow(16, len - i - 1);
            }
            else if ('A' <= s[i] && s[i] <= 'F')
            {
                sum += (s[i] - 55) * pow(16, len - i - 1);
            }
        }
        cout << sum << endl;
    }

    return 0;
}
