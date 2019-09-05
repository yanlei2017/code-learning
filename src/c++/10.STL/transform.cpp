#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

// template <typename T>
// T square(T in)
// {
//     return in * in;
// }

double square(double x)
{
    return x * x;
}

int main(int argc, char const *argv[])
{
    transform(istream_iterator<double>(cin), istream_iterator<double>(), ostream_iterator<double>(cout, " "), square);

    return 0;
}
