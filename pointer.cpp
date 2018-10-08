#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct student
{
	unsigned int id;
	string name;
	string sex;
	string addr;
	
};
int main()
{
	struct student stu1={1,"yanlei1","man1","wust1"}, stu2={2,"yanlei2","man2","wust2"}, stu3={3,"yanlei3","man3","wust3"};
	
	student * p_stu1=&stu1;
	const student * stu[3]={&stu1,&stu2,&stu3};
	cout<<"stu1.name: "<<stu1.name<<endl;
	cout<<"p_stu1>>name: "<<p_stu1->name<<endl;
	cout<<"(**stu).name: "<<(*stu)->name<<endl;
}