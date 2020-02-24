#include<thread>
#include<iostream>
#include <mutex>
std::mutex mutex;
void fun1()
{
    {
        std::unique_lock<std::mutex> lock(mutex);
        for (int i = 0; i <5 ; ++i) {
            std::cout<<"<fun1>\n";
        }
    }
}
void fun2(){

    {
        std::unique_lock<std::mutex> lock(mutex);
        for (int i = 0; i < 5; ++i) {
            std::cout<<"<fun2>\n";
        }
    }
}

int main()
{
    std::thread th(fun1);
    std::thread t2(fun2);
    th.join();
    t2.join();
    return 0;
}

