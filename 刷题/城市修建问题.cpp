/*
有一个城市需要修建，给你N个民居的坐标X,Y，问把这么多民居全都包进城市的话，
城市所需最小面积是多少（注意，城市为平行于坐标轴的正方形）
*/

#include <iostream>
using namespace std;
long long max(int a, int b)
{
    return a > b ? a : b;
}
long long min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    long long n = 0;
    long long x, y;
    long long min_x = 0, min_y = 0, max_x = 0, max_y = 0;
    cin >> n;
    cin >> x;
    cin >> y;
    max_x = min_x = x;
    max_y = min_y = y;
    while (cin)
    {
        cin >> x;
        cin >> y;
        max_x = max(x, max_x);
        max_y = max(y, max_y);
        min_x = min(x, min_x);
        min_y = min(y, min_y);
    }
    long long l = (max_x - min_x);
    long long ll = (max_y - min_y);
    long long lll = max(l, ll);
    long long llll = lll * lll;
 
    cout << llll << endl;
}