#ifndef COORDIN_H_
#define COORDIN_H_

struct polor
{
	double distance;
	double angle;

};

struct rect
{
	double x;
	double y;
};

polor rect_to_polor(rect xypos);
void showpolor(polor dapos);
void showvalue(int x);


#endif
