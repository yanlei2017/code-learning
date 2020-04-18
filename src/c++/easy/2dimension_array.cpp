#include<iostream>
#include<vector>
#include<array>

using namespace std;

int sum_2_dimension_array(int a[][4],int size);
int main(void)
{
	int data[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};//3个指针 指向一个指向4个int的指针
	int total;
	total=sum_2_dimension_array(data,3);
	cout<<total<<endl;
	cout<<"sizeof(dada)/sizeof(data[0]): "<<sizeof(data)/sizeof(data[0])<<endl;
	cout<<"sizeof(data[0])/sizeof(data[0][0]): "<<sizeof(data[0])/sizeof(data[0][0])<<endl;
	/*
	vector<vector<int>> message(3,1);
	int sum;
	sum=sum_2_dimension_array(message,3);
	cout<<"sizeof(message)/sizeof(message[0]): "<<sizeof(message)/sizeof(message[0])<<endl;
	cout<<"sizeof(message[0])/sizeof(message[0][0]): "<<sizeof(message[0])/sizeof(message[0][0])<<endl;
	*/
	return 0;
}

int sum_2_dimension_array(int a[][4],int size)
{
	int total=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<4;j++)
			total+=a[i][j];
	}
	return total;
}