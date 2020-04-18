#include <bits/stdc++.h>
/*代码中有两个问题，一个是多线程的情况下可能会出现new两次的情况。另外一个是程序退出后没有运行析构函数*/
class wust
{
private:
    static wust *instance;
    wust() {}

public:
    static wust *get_instance()
    {

        if (instance == nullptr)
        {
            instance = new wust();
        }
        return instance;
    }
    ~wust() { delete instance; }
};

wust *wust::instance = nullptr;

int main(int argc, char const *argv[])
{
    wust *ins = wust::get_instance();
    return 0;
}
