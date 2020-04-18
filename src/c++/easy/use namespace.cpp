#include<iostream>
using namespace std;

namespace miya
{
	using namespace std;
	struct  info 
		{
		float height;
		unsigned int age;
		unsigned int weight;
		char * name;
		};
	void coutmiya520()
	{
		cout<<"                                                       "<<endl;
		cout<<"                          Miya 520                     "<<endl;

    	for (float y = 1.5f; y > -1.5f; y -= 0.1f) 
		{
       		 for (float x = -1.5f; x < 1.5f; x += 0.05f) 
			{
           	 float a = x * x + y * y - 1;
           	 cout<<(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
        	}
        cout<<('\n');
		}
	}
}

int main()
{

	using namespace miya;
	info Miya;
	coutmiya520();
	Miya.name="xiao yang";
	Miya.age=25;
	Miya.height=160;
	Miya.weight=46;
	cout<<"Miya.name: "<<Miya.name<<endl;
	cout<<"Miya.age: "<<Miya.age<<endl;
	cout<<"Miya.height: "<<Miya.height<<" cm"<<endl;
	cout<<"Miya.weight: "<<Miya.weight<<" kg"<<endl;
	return 0;
}
