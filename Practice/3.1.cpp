#include <iostream>

#include <set>
#include <iterator>
using namespace std;
set<unsigned int> inset;

int main(int argc, char const *argv[])
{
    int n, temp;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {

            cin >> temp;
            inset.insert(temp);
        }

        // set<unsigned int>::iterator it;
        // for (it = inset.begin(); it != inset.end(); ++it)
        //     cout << *it << endl;
        copy(inset.begin(), inset.end(), ostream_iterator<unsigned int>(cout, "\n"));
        inset.clear();
    }

    return 0;
}
