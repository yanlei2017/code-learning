#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,m;
    char y[10]="ntse";
    char *x=y;
    n=strlen(x);
    *x=x[n];
    x++;
    printf("x=%s\n",x);
    printf("y=%s\n",y);

    return 0;
}
