/*
圈地运动，就是用很多木棍摆在地上组成一个面积大于0的多边形～

小明喜欢圈地运动，于是他需要去小红店里面买一些木棍，期望圈出一块地来。小红想挑战一下小明，所以给小明设置了一些障碍。障碍分别是：

1.如果小明要买第i块木棍的话，他就必须把前i-1块木棍都买下来。

2.买了的木棍都必须用在圈地运动中。

那么请问小明最少买多少根木棍，才能使得木棍围成的图形是个面积大于0多边形呢？
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int NumOfStick = 0; //木棍个数
    cin >> NumOfStick;
    int *a = new int[NumOfStick]();
    for (int i = 0; i < NumOfStick; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < NumOfStick; i++)
    {
        // cout << "a[" << i << "] = " << a[i] << endl;
    }

    int Max_line = a[0] > a[1] ? a[0] : a[1];
    int Sum = a[0] + a[1];
    int flag = 0;
    for (int d = 2; d <= NumOfStick; d++)
    {
        if (a[d] > Max_line) //更新最大的边
        {
            Max_line = a[d];
        }
        Sum += a[d]; //前d根边的所有和
        if (Sum - Max_line > Max_line)
        {
            cout << d + 1 << endl;
            flag = 1;
            return 0;
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }

    delete a;
    return 0;
}