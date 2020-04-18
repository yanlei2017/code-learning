#include<iostream>
#include<cmath>

struct polor
{
	double angle;
	double distance;
};

struct rect
{
	double x;
	double y;
};

using namespace std;
polor rect_to_polor(rect xy);
void show_polor(polor po);
int main(void)
{
	rect dot;
	polor dot_p;
	cout<<"please input a rect dot, X and Y values "<<endl;
	cout<<"x: ";
	cin>>dot.x;
	cout<<"y: ";
	cin>>dot.y;
	dot_p=rect_to_polor(dot);
	show_polor(dot_p);
	
	return 0;
}

polor rect_to_polor(rect xy)
{
	polor temp;
	temp.angle=atan2(xy.y,xy.x);
	temp.distance=sqrt(xy.x*xy.x+xy.y*xy.y);
	return temp;
}

void show_polor(polor po)
{
	const double rad_to_deg=57.29577951;
	cout<<"THE DISTANCE OF DOT IS : "<<po.distance<<endl;
	cout<<"THE ANGLE OF DOT IS : "   <<po.angle*rad_to_deg<<" degrees "<<endl;
}
