#include <iostream>

int main() {
//   try {
//     int* p = new int[0x11F000000];
//   } catch (std::bad_alloc e) {
//     std::cout << e.what() << std::endl;
//   }

  int * c = new (std::nothrow) int[0x11F000000];
  if (!c) {
    std::cout << "new fail" << std::endl;
  }
}