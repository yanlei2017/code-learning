#include <iostream>
#include <yanlei.hpp>
using namespace std;
yanlei yan;//定义在函数之外的默认初始化为0
int main(int argc, char const *argv[]) {

  std::cout << "Hello World !" << std::endl;
  cout << "size of bool = " << sizeof(bool) << endl;
  cout << "size of char = " << sizeof(char) << endl;
  cout << "size of int = " << sizeof(int) << endl;
  cout << "size of float = " << sizeof(float) << endl;
  cout << "size of double = " << sizeof(double) << endl;
  cout << "size of long = " << sizeof(long) << endl;
  cout << "size of long long = " << sizeof(long long) << endl;

  cout << "sizeof yan =" << sizeof(yan) << endl;
  yan.flag = 0;
  cout << "out of func 's struct default value\n";
  cout << "yan.flag = " << yan.flag << endl
       << "yan.yanlei = " << yan.yanlei << endl  //结构体默认值不确定？
       << "yan.yanleif = " << yan.yanleif << endl
       << "yan.yanleid = " << yan.yanleid << endl
       << "yan.yanleil = " << yan.yanleil << endl
       << "yan.yanleidll = " << yan.yanleill << endl;
  yanlei yanlei1;
  yan = yanlei1;
  cout << "inner of func main 's struct default value\n";

  cout << "yan.flag = " << yan.flag << endl
       << "yan.yanlei = " << yan.yanlei << endl  //结构体默认值不确定？
       << "yan.yanleif = " << yan.yanleif << endl
       << "yan.yanleid = " << yan.yanleid << endl
       << "yan.yanleil = " << yan.yanleil << endl
       << "yan.yanleidll = " << yan.yanleill << endl;
  unsigned int a1 = 30, a2 = 32;
  cout << "a1= " << a1 << endl
       << "a2= " << a2 << endl
       << "a1-a2= " << a1 - a2 << endl
       << "UINT32_MAX= " << UINT32_MAX << endl;

  int a3 ;
  cout << "a3= " << a3<<endl;



  return -1;
}
