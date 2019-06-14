#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  using namespace std;
  int yanlei = 0;
  int &yanlei_r = yanlei;
  std::cout << "yanlei addr = " << (void *)&yanlei << endl;
  std::cout << "yanlei_r addr = " << (void *)&yanlei_r << endl;

  yanlei_r = 1;
  cout << "after  yanlei_r=1" << endl;
  cout << yanlei << endl;
  cout << yanlei_r << endl;

  yanlei = 1;
  cout << "after  yanlei=1" << endl;
  cout << yanlei << endl;
  cout << yanlei_r << endl;
  int *yanlei_p =&yanlei;
  cout <<"yanlei_p addr = " <<(void *)yanlei_p << endl;

  int * &yanlei_pr = yanlei_p;
  cout << "&yanlei_pr ： " << &yanlei_pr << endl;
  cout << "yanlei_pr ： " << yanlei_pr << endl;
  cout << "*&yanlei_pr ： " << *&yanlei_pr << endl;

  int i = 1;
  cout << "i=1" << endl;
  const int &i_c = i;
  i = 2;
  //i_c = 2;//error: assignment of read-only reference ‘i_c’
  cout << "i_c = " << i_c << endl;
  return 0;
}
