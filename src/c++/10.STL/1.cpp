#include<vector>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> a;
    a.push_back(5);
    a.reserve(50);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    a.resize(60);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
    return 0;
}
