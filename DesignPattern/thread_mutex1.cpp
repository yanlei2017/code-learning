#include <bits/stdc++.h>
using namespace std;

void *fun1(void *)
{

    std::unique_lock<std::mutex> lock(mutex);
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "<fun" << i << ">\n";
    }
}
void fun2()
{

    std::unique_lock<std::mutex> lock(mutex);
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "<fun2>\n";
    }
}

void fun3()
{

    std::unique_lock<std::mutex> lock(mutex);
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "<fun3>\n";
    }
}
void fun4()
{

    std::unique_lock<std::mutex> lock(mutex);
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "<fun4>\n";
    }
}

int main()
{
    pthread_t tids[4];
    for (size_t i = 0; i < 4; i++)
    {
        int ret = pthread_create(&tids[i], nullptr, fun1, nullptr);
        if (ret != 0)
        {
            cout << "pthread_create error: error_code=" << ret << endl;
        }
    }

    // std::thread th(fun1);
    // std::thread t2(fun2);
    // th.join();
    // t2.join();

    pthread_exit(NULL);
    return 0;
}
