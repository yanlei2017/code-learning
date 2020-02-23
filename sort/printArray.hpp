#if !defined(PRINT_ARRAY_H)
#define PRINT_ARRAY_H

template <class T>
void printarray(T arr[], int n) {
  for (size_t i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

#endif  // PRINT_ARRAY_H
}