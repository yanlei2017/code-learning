#include <stdio.h>
#include <math.h>

#define PI 3.141592654 //宏定义

void PrintHelloWorld(int num); //声明
void Swap(int *A_, int *B_){
    int C;
    C=*A_;
    *A_=*B_;
    *B_=C;
    printf("A_= %d\n",*A_);
    printf("B_= %d\n",*B_);

}
int main()
{
    float cos45 = cos(45.0 / 180.0 * PI);
    float sin45 = sin(45.0 / 180.0 * PI); //单精度
    double a = 3.0;                       //双精度浮点数
    PrintHelloWorld(5);                   //5:实参
    printf("%f\n", sin45);
    unsigned int age = 18;
    int sizeof_char = sizeof(char);
    int sizeof_int = 1000;
    int sizeof_float = sizeof(float);
    printf("address of sizeof_int = %x \n",& sizeof_int);
    int * yanlei=&sizeof_int;
    printf("yanlei = %d\n",*yanlei);
    printf("sizeof_char = %d\n", sizeof_char);
    printf("sizeof_int = %d\n", sizeof_int);
    printf("sizeof_float = %d\n", sizeof_float);
    printf("sizeof_double = %d \n", (int)sizeof(double));
    printf("sizeof_long = %d \n",  (int)sizeof(long));
    
    int A=200,B=300;
    printf("A= %d \n",A);
    printf("B= %d \n",B);
    Swap(&A,&B);//交换
    printf("A= %d \n",A);
    printf("B= %d \n",B);
    char char200=65;
    printf("char200 = %c \n",char200);
    return 0;
}

//定义
void PrintHelloWorld(int num)
{ //num: 形参

    //return 3.0;
    // while (num--)
    // {
    //     printf("Hello World ! \n");
    // }
    // if (num--)
    // {
    //     printf("Hello World ! \n");
    // }
    // else
    // {
    //     printf("YFL ! \n");
    // }
    do
    {
         printf("Hello World ! \n");
    } while (num--);
    
    

}
