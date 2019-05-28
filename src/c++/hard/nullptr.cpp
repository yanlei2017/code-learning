#include <iostream> 
#include <string> 
using namespace std; 
void func(int* num) 
{
 cout << "this is the ptr function..." << endl; 
} 
void func(int num) 
{ 
cout << "this is the normal function..." << endl; 
} 
int main(int argc, char** argv) 
{ 
	func(nullptr);
	cout<<"in c++ NULL is int 0,nullptr is designed to be empty * to avoid undefined *,"<<endl;
	//func(NULL);
	return 0;
 }

