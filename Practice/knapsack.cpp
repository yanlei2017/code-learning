#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> F(100, vector<int>(100)); /*100*100 表格用来穷举*/

class knapsack
{
private:
    vector<int> weight_; /*商品重量*/
    vector<int> value_;  /*商品价值*/
    int capacity_;       /*背包容量*/
    int num_;            /**/
    vector<int> best;
    /* data */
public:
    knapsack(vector<int> &w, vector<int> &value, int cap, int num);
    int maxValue(vector<vector<int>> &F); /*计算动态规划表*/
    void BestSolution(int num, int cap);
    void printBestSolution();
};

knapsack::knapsack(vector<int> &w, vector<int> &v, int cap, int n) : weight_(w), value_(v)
{
    capacity_ = cap + 1;
    num_ = n + 1;
}

int knapsack::maxValue(vector<vector<int>> &F)
{
    int i, j;
    for (i = 1; i < num_; i++)
    {
        for (j = 1; j < capacity_; j++)
        {
            if (weight_[i] > j) /*重量大于背包容量了*/
                F[i][j] = F[i - 1][j];
            else
            {
                int value_take = F[i - 1][j - weight_[i]] + value_[i]; /*拿*/
                int value_not_take = F[i - 1][j];                      /*不拿*/
                F[i][j] = max(value_take, value_not_take);
            }
        }
    }
    return F[num_ - 1][capacity_ - 1];
}

void knapsack::BestSolution(int num, int cap) /*回溯法*/
{
    if (num > 0)
    {
        if (F[num][cap] == F[num - 1][cap])
        {
            best.push_back(0);
            BestSolution(num - 1, cap);
        }
        else if (cap - weight_[num] >= 0 && F[num][cap] == F[num - 1][cap - weight_[num]] + value_[num])
        {
            best.push_back(1);
            BestSolution(num - 1, cap - weight_[num]);
        }
    }
}

void knapsack::printBestSolution()
{
    cout<<"Selected items index are : ";
    for (int i = best.size() - 1; i >= 0; i--)
    {
        if (best[i] == 1)
        {
            cout << num_ - 1 - i << " ";
        }
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    int num, cap;
    cin >> num >> cap; /*输入商品数量和背包容量*/
    vector<int> weight = {
                    0,
                },
                value = {
                    0,
                };
    int temp;
    for (size_t i = 0; i < num; i++)
    {
        cin >> temp;
        weight.push_back(temp);
    }
    for (size_t j = 0; j < num; j++)
    {
        cin >> temp;
        value.push_back(temp);
    }

    knapsack hello(weight, value, cap, num);

    cout << hello.maxValue(F) << endl;
    hello.BestSolution(num, cap);
    hello.printBestSolution();

    return 0;
}
