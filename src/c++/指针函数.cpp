#include<iostream>

using namespace std;
 int max(int a,int b){
     return a>b?a:b;
 }


int compute(int a,int b,int (*func)(int a,int b)){
    return func(a,b);
}
 int main(int argc, char const *argv[])
 {
     int a,b,c;
     cin>>a;
     cin>>b;
     c=compute(a,b,max);
     cout<<c<<endl;
     return 0;
 }
 