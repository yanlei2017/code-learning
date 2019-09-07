#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double a;
    cin >> a;
    int ia = a;
    double dia = ia;
    double c = a - dia;
    if (c > 0.5)
    {

        cout << ia + 1;
        return 0;
    }
    cout << ia << endl;
    return 0;
}
