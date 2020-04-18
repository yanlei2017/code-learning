#include <bits/stdc++.h>
using namespace std;
set<int> s, r;

int main(int argc, char const *argv[])
{
    int temp;
    vector<int> in;
    pair<set<int>::iterator, bool> ret;
    while (cin >> temp)
    {
        in.push_back(temp);
    }
    cout << "duplicated num = ";
    for (int i = 0; i < in.size(); i++)
    {
        ret = s.insert(in[i]);
        if (!ret.second)
        {
            r.insert(in[i]);
        }
    }
    for (auto &&i : r)
    {
        cout << i << " ";
    }
    cout << endl;
    

    return 0;
}
