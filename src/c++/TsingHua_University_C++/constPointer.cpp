#include <iostream>
/*
const char * myPtr = &char_A;
指向常量的指针,先看*再看const，定义一个指针指向一个常量，不能通过指针来修改这个指针指向的值。
char * const myPtr = &char_A;
常量的指针 先看const再看*
.不能修改这个指针的指向，但是这个指针所指向的地址上存储的值可以修改。 const char
* const myPtr = &char_A;
指向常量的常量指针,既不可以修改指针的值，也不可以修改指针指向的值。


指针p因为有了const的修饰，所以为指针常量，即，指针p不能修改了。
整个*p前面没有const修饰，则*p为变量而不是常量，所以，可改变*p的值。
如果const修饰在*p前则不能改的是*p，而不是指p；
如果const是直接写在p前，则p不能改。
*/
using namespace std;

int main(void) {
  int i1 = 30;
  int i2 = 40;
  int* const pi = &i1;  //这里的pi指针式常量,指针指向的地址不能再修改
  // pi=&i2;//error
  cout << *pi << endl;
  i1 = 80;
  cout << *pi << endl;
  *pi = 90;
  cout << *pi << endl;

  /**************************************************************/
  int q1 = 10;
  int q2 = 20;
  const int* pp = &q1;  //定义一个int* 指针，指向一个常量
  cout << *pp << endl;
  pp = &q2;
  cout << *pp << endl;

  q2++;
  cout << *pp << endl;

  // *pp=30;//error /*不能通过指针来修改这个指针指向的值。*/

  /**************************************************************/

  return 0;
}
