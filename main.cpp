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

  return 0;
}
