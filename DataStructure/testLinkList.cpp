#include <iostream>
using namespace std;
#include "linkList.h"

int main(int argc, char const *argv[]) {
  linkList<int> ss(10);
  ss.printLinkList();
  ss.up(20);
  ss.printLinkList();
  ss.append(888);
  ss.printLinkList();
  int pos888;
  if (ss.getPos(pos888, 888)) {
    cout << "Get Pos of number 888 ok ,  pos  = " << pos888 << endl;
  } else {
    cout << "Get Pos of number 888 fail !" << endl;
  }
  int valueOfPos8;
  if (ss.getValue(8, valueOfPos8)) {
    cout << "Get value of pos 8 ok ,  value  = " << valueOfPos8 << endl;

  } else {
    cout << "Get value of pos 8 fail !" << endl;
  }
  if (ss.insert(9, 999)) {
    cout << "Insert  at pos 9 of number 999  ok" << endl;
    ss.printLinkList();
  } else {
    cout << "Insert  at pos 9 fail" << endl;
  }

  ss.clear();
  if (ss.isEmpty())
    cout << "Linklist is empty" << endl;
  else
    cout << "Linklist is not empty" << endl;
  ss.append(888);
  return 0;
}
