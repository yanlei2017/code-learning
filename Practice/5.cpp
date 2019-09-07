/*题目描述
功能:输入一个正整数，按照从小到大的顺序输出它的所有质数的因子（如180的质数因子为2 2 3 3 5 ）

最后一个数后面也要有空格

详细描述：


函数接口说明：

public String getResult(long ulDataInput)

输入参数：

long ulDataInput：输入的正整数

返回值：

String
*/

#include <iostream>
using namespace std;
#include <vector>
/*素数定理  0～x范围内素数个数=x/ln(x) */
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> a(1);
    int count = 0;
    if (n == 0)
    {
        return 1;
    }

    /*求质数*/
    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true; /*2是最小的质数，除了2以外，其他的素数都是奇数*/
        for (int j = 0; j < count; j++)
        {
            if (i % a[j] == 0)
            {
                isPrime = false; //若i被a[j]整除,说明i不是质数
                break;
            }
        }
        if (isPrime)
        {
            if (count == a.size())
            {
                a.resize(count + 1);
            }
            a[count++] = i; /*把质数保存起来用于后面试除*/
        }
    }
    int ccc = 0;
    while (ccc < a.size())
    {
        if (n % a[ccc] == 0)
        {
            n = n / a[ccc];
            cout << a[ccc] << " ";
            continue;
        }
        else
        {
            if (n == 1)
                break;
            ccc++;
        }
    }

    return 0;
}
