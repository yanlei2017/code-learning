
#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int main(void)
{

    int a[3][3]; //定义一个3*3的矩阵
    /*
    a[0][0] a[0][1] a[0][2] 
    a[1][0] a[1][1] a[1][2] 
    a[2][0] a[2][1] a[2][2] 
    */
   for (size_t i = 0; i < 3; i++)
   {
       /* code */
   }
   
    printf("请输入9个数\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]); //从命令行读取数据
        }
    }
    printf("输入矩阵：\n");
    for (int i = 0; i < 3; i++) //外层循环，控制行数
    {
        for (int j = 0; j < 3; j++) //内层循环，控制列数
        {
            printf("%d \t", a[i][j]); // \t表示每输出一个字符后输出一个tab空格
        }
        printf("\n"); //这个表示在输出完每一行之后换行
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(&a[i][j], &a[j][i]); //数据交换
        }
    }
    printf("矩阵的转置：\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", a[i][j]); // \t表示每输出一个字符后输出一个tab空格
        }
        printf("\n"); //这个表示在输出完每一行之后换行
    }
    return 0;
}
