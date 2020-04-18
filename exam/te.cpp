#include <bits/stdc++.h>

using namespace std;

class te
{
private:
    /* data */
public:
    te(/* args */);
    ~te();
    virtual void fun() {}
};

te::te(/* args */)
{
}

te::~te()
{
}

int main(int argc, char const *argv[])
{
    char s1[40] = "string";
    char s2[20] = "test";
    int i = 0, j = 0;
    while (s1[i] != '\0')
        i++;
    while (s2[i] != '\0')
        s1[++i] = s2[j++];
    s1[i] = 0;
    cout << s1 << endl;

    return 0;
}
