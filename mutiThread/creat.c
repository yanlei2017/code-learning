#include "pthread.h"
#include "stdio.h"
#include"stdlib.h"
int arr[5000];

struct res {
  int first;
  int last;
  int result;
};

void* fun1(void* args) {
  printf("%s ", "\nI am fun1 \n");
  return NULL;
}

void* addArr(void* args) {
  struct res* tmp = (struct res*)(args);
  int s;
  for (size_t i = tmp->first; i < tmp->last; i++) {
    s += arr[i];
  }
  tmp->result = s;
  return NULL;
}
int main() {
  for (size_t i = 0; i < 5000; i++) {
    arr[i] =  5;
  }
  struct res A = {0, 2500, 0};
  struct res B = {2500, 5000, 0};

  pthread_t th1, th2;
  pthread_create(&th1, NULL, addArr, &A);
  pthread_create(&th2, NULL, addArr, &B);
  
  pthread_join(th1, NULL);
  pthread_join(th2, NULL);
  printf("sum = %d",A.result+B.result);
  return 0;
}