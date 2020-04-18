#include <bits/stdc++.h>

using namespace std;
int in[4][4];
int out[4][4];
int main(int argc, char const *argv[])
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int a;
            cin >> a;
            in[i][j] = a;
            out[i][j] = a;
        }
    }
    for (int i = 0; i < 4; i++)/*上边*/
    {
        if (in[0][i] == 0)
        {
            out[0][i] = 1;
        }
    }
    for (int i = 0; i < 4; i++)/*下边*/
    {
        if (in[3][i] == 0)
        {
            out[3][i] = 1;
        }
    }
    for (int j = 0; j < 4; j++)/*左边*/
    {
        if (in[j][0] == 0)
        {
            out[j][0] = 1;
        }
    }
    for (int j = 0; j < 4; j++)/*右边*/
    {
        if (in[j][3] == 0)
        {
            out[j][3] = 1;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << out[i][j] << " ";
        }
        cout << endl;
        /* code */
    }
    /* 然后内层矩阵再算每个边有没有白色的棋子，一层一层递进*/
    for 
    



    return 0;
}
