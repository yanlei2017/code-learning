<<<<<<< HEAD
#include <hello.hpp>

int main(int argc, char const *argv[])
{
  helloworld();
=======
#include <iostream>
using std::string;
using namespace std;

int main(int argc, char const *argv[])
{
  string s(10, 'c');
  cout << "&s"<<(void *)&s << endl;
  for (auto &c : s) {
    c = toupper(c);
    cout << (void *)&c << endl;

  }
  cout << s << endl;

>>>>>>> 168cf2d752a97e795f2209e719e90098555d686a
  return 0;
}
