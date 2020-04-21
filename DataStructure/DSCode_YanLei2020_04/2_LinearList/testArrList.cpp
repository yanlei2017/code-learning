
#include <iostream>

#include "List.h"
#include "arrList.h"

using namespace std;

int main(int argc, char const *argv[]) {
  arrList<int> ss(20);
  cout << "Initialize arrList :" << endl;
  ss.printArr();
  cout << "Using append() to full filling arrList:" << endl;
  int tmp = 0;
  while (ss.append(tmp)) {
    tmp++;
  };
  ss.printArr();

  if (ss.append(5)) {
    cout << "Append 5  ok" << endl;
  } else {
    cout << "Append 5 fail !" << endl;
  }

  int pos = 11111;
  if (ss.getPos(pos, 5)) {
    cout << "Pos of 5 is : " << pos << endl;
  } else {
    cout << "get pos fail!" << endl;
  }
  if (ss.deleteAt(pos)) {
    cout << "Delete at pos " << pos << " ok" << endl;
  } else {
    cout << "Delete at pos " << pos << " fail !" << endl;
  }
  ss.printArr();

  int val = 888;
  if (ss.getValue(3, val))
    cout << "get val of pos[3] ok , val = " << val << endl;
  else
    cout << " get val of pos[3] fail " << endl;
  if (ss.insert(5, 5)) {
    cout << "insert pos[5] = 5 OK , print arrList :" << endl;
    ss.printArr();
  } else {
    cout << " insert pos[5] = 5 fail" << endl;
  }
  int len = ss.length();
  cout << "Length of arrList = " << len << endl;
  if (ss.setValue(10, 100)) {
    cout << "set pos[10] = 100 ok , print arrList :" << endl;
    ss.printArr();
  } else {
    cout << "set pos[10] = 100 fail " << endl;
  }
  cout << "clear arrList :" << endl;
  ss.clear();
  ss.printArr();

  return 0;
}
