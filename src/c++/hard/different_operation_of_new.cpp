#include <iostream>
#include <new>
const int BUF =512;
const int N=5;
char buffer[BUF];
int main()
{
	using namespace std;

	double *miya1,*miya2;
	miya1=new double[N];
	miya2=new(buffer+N*sizeof(double)) double[N];
	 for(int i=0;i<N;i++)
	{
		miya2[i]=miya1[i]=1000+20.0*i;
	}
	

	cout<<"MEM address:\n"<<"Heap(dynamic memory) address: "<<miya1<<" Static(static memory) address: "<<(void*)buffer<<endl;
	cout<<"\"miya1\" is placed in heap,\"miya1\" came from \"new\" operation,\"buffer\" also came form operation \"new\",but was placed in static memory,\"miya2\" initialed at buffer+5*sizeof(double) "<<endl;
	 for(int i=0;i<N;i++)
	{
		cout<<" miya1: "<<miya1[i]<<" at hedp:"<<&miya1[i]<<" ; "<<"miya2: "<<miya2[i]<<" at static memory "<<&miya2[i]<<endl;
		/*		
		cout<<(char*)miya2-buffer<<endl;
		cout<<"(char*)miya2 : "<<miya2<<endl;
		cout<<"(int*)miya2 : "<<(int*)miya2<<endl;
		cout<<((char*)miya2)-((char*)buffer)<<endl;
		*/
		

	}
	
	return 0;
}
