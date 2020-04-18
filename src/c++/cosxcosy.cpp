#include <iostream>
#include <random>
#include<yanlei.hpp>
using namespace std;
int main(int argc, char const *argv[]) {
  float index = 0;
  float sum = 0;
  float data[900];
  float temp = 0;
  for (int i = 0; i < 900; i++) {
    data[i] = cos(temp) * cos(temp);
    index += 0.1f;
    temp = (index / 180.0) * M_PI;
      // cout << "index = " << index<< endl;
      //   cout << "temp = " << temp<< endl;
  }

  FILE *fp;
  if ((fp = fopen("cosxcosx.txt", "wb")) == NULL) {
    printf("cant open the file");
    exit(0);
  }
  char datas[50] = "data";
  fprintf(fp, "%s \n", datas);

  for (int i = 0; i < 900; i++) {
    fprintf(fp, "%f \n", data[i]);
  }
  fclose(fp);

  extern int a ;
  return 0;
}
