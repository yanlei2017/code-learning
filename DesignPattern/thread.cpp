#include<thread>
#include<iostream>

void fun1()
{
	for (int i = 0; i <5 ; ++i) {
       std::cout<<"<fun1-1>\n";
   }
}
void fun2(){
     for (int i = 0; i < 5; ++i) {
         std::cout<<"<fun2-2>\n";
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

