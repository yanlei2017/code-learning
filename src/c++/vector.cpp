#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    
    vector<int> a={1,2,4};
    for (auto i=a.begin(); i !=a.end(); i++)
    {
        cout<<*i<<endl;
    }

    for (auto &&i : a)
    {
        cout<<i<<endl;
    }
    
    

    return 0;
}
