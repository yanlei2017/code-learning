#include <stdio.h>  
#include <math.h>
void print();  
int main(void)  
{  
	double a,b,c;
	a=pow(1.0f/101325.0f,0.1902632f);
	b=44330.1711145;
	c=a*b;
	printf("c=%lf\n",c);
    void (*fuc)();   
    fuc = print ;   
    fuc();    
}   
void print()  
{  
    printf("hello world!\n");  
} 