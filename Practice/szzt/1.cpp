#include <bits/stdc++.h>
using namespace std;
class aaa
{
private:
    /* data */
public:
    aaa(/* args */);
    ~aaa();
};

aaa::aaa(/* args */)
{
    cout << "h" << endl;
}

aaa::~aaa()
{
}

int main(int argc, char const *argv[])
{
    char *p = "helloworld";
    char q[] = "helloworld";
    printf("%d %d %d %d", sizeof(p), strlen(p), sizeof(q), strlen(q));
    return 0;
}
