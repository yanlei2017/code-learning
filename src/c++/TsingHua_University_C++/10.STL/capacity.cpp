#include <vector>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> a;
    for (size_t i = 0; i < 100; i++)
    {
        a.push_back(i);
        cout << "a.size = " << a.size() << endl;
        cout << "a.capacity() = " << a.capacity() << endl; //capacity返回的是内存容量 一个一个pushback的话，vector的capacity会倍增 1 2 4 8 16 32 64
    }
    a.reserve(50);
    cout << "\n\nafter a.reserve(50)" << endl; //reserve的参数如果小于当前对象的size和capacity则不会做出任何改变
    cout << "a.size = " << a.size() << endl;
    cout << "a.capacity() = " << a.capacity() << endl; //capacity返回的是内存容量

    a.reserve(500);
    cout << "\n\nafter a.reserve(500)" << endl; //reserve只改变capacity大小，不会实际分配并初始化内存（capacity）
    cout << "a.size = " << a.size() << endl;
    cout << "a.capacity() = " << a.capacity() << endl;

    a.resize(1000);
    cout << "\n\nafter a.resize(1000)" << endl; //resize会改变capacity大小并改变实际拥有的成员大小size，并初始化新增的元素
    cout << "a.size = " << a.size() << endl;
    cout << "a.capacity() = " << a.capacity() << endl;
    return 0;
}
