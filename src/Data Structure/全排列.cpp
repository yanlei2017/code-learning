#include <iostream>
#include <iterator>
using namespace std;

void perm(int a[], int p, int q)
{

    if (p == q)
    {
        copy(a, a + q, ostream_iterator<int>(cout, " "));
        cout<<endl;
    }

    for (int i = p; i < q; i++)
    {
        swap(a[i], a[p]);
        perm(a, p + 1, q);
        swap(a[i], a[p]);
    }
}

int main(int argc, char const *argv[])
{
    int a[]={1,2,3,4,5};
    perm(a,0,5);
}
