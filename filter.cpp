#include <iostream>
#include <random>
using namespace std;
int main(int argc, char const *argv[]) {
  float input[10000] = {};
  float output[10000] = {};
  float soutput[10000] = {};

  default_random_engine e;
  uniform_real_distribution<float> u(-2, 2);
  float index = 0;
  for (int i = 0; i < 10000; i++) {
    // input[i] = i+u(e);

    input[i] = 10 * sin(index);
    index += 0.01;
  }

  for (int i = 0; i < 10000; i++) {
    cout << "input[" << i << "] = " << input[i] << endl;
    output[i + 1] = output[i] * 0.95 + input[i + 2] * 0.05;
    cout << "ouput[" << i << "] = " << output[i] << endl;

    if (i%900==0)
      input[i+1]=20;
  }

  FILE *fp;
  if ((fp = fopen("a1.txt", "wb")) == NULL) {
    printf("cant open the file");
    exit(0);
  }
  fprintf(fp, "%c \n", 'i');

  for (int i = 0; i < 10000; i++) {
    fprintf(fp, "%f \n", input[i]);
  }
  fclose(fp);

  FILE *fp1;
  if ((fp1 = fopen("a2.txt", "wb")) == NULL) {
    printf("cant open the file");
    exit(0);
  }
  fprintf(fp1, "%c \n", 'o');
  for (int i = 0; i < 10000; i++) {
    fprintf(fp1, "%f \n", output[i]);
  }
  fclose(fp);

  return 0;
}
