//C++ //C++，用stl中的map
#include<iostream>
#include<map>
using namespace std;
 
int main()
{
    int n;
    while(cin >> n){
        map<int,int> m;
        while(n--){
            int key,value;
            cin >> key >> value;
            if(!m[key]){
                m[key] = value;
            }
            else m[key] += value;//不存在时赋值，存在时累加
        }
        //map内部本身就是按照key的大小顺序进行存储的
        for(map<int,int>::iterator it=m.begin();it!=m.end();++it){
            cout << it->first << " "<< it->second << endl;
        }
    }
    return 0;
}