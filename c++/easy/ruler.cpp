#include<iostream>

const int len=66;
const int count=7	;

using namespace std;
void subdevide( char arr[],int min,int max,int level);
int main(void)
{
	char ruler[len];
	int min=0;
	int max=len-2;
	ruler[min]=ruler[max]='*';
	ruler[len-1]='\0';
	for(int i=1;i<len-2;i++)
		ruler[i]=' ';
	cout<<"The original ruler is : "<<endl<<ruler<<endl;
	
	for(int i = 1; i <count ; i++)
	{
		subdevide(ruler,min,max,i);
		cout<<"ruler devided, now ruler: "<<endl<<ruler<<endl;
	}
	


	system("pause");
	return 0;
}

void subdevide( char arr[],int min,int max,int level)
{
	if(level==0)
	return;
	int mid=(min+max)/2;
	arr[mid]='*';
	subdevide(arr,min,mid,level-1);
	subdevide(arr,mid,max,level-1);
}