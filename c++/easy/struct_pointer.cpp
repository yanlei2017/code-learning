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
void rect_to_polor(rect * xy,polor * xy_polor);
void show_polor(const polor * po);
int main(void)
{
	rect dot;
	polor dot_p;
	cout<<"please input a rect dot, X and Y values "<<endl;
	cout<<"x: ";
	cin>>dot.x;
	cout<<"y: ";
	cin>>dot.y;
	rect_to_polor(&dot,&dot_p);
	show_polor(&dot_p);
	
	return 0;
}

void rect_to_polor(rect * xy,polor * xy_polor)
{
	xy_polor->angle=atan2(xy->y,xy->x);
	xy_polor->distance=sqrt(xy->x*xy->x+xy->y*xy->y);
}

void show_polor(const polor * po)
{
	const double rad_to_deg=57.29577951;
	cout<<"THE DISTANCE OF DOT IS : "<<po->distance<<endl;
	cout<<"THE ANGLE OF DOT IS : "   <<po->angle*rad_to_deg<<" degrees "<<endl;
}
