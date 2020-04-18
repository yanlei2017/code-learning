#include <iostream>
#include <cmath>
#include "coordin.h"
extern  const int yanlei;
polor rect_to_polor(rect xypos)
{
    using namespace std;
    polor answer;
    answer.distance=
    sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angle=atan2(xypos.y,xypos.x);
    return answer;
}

void showpolor(polor dapos)
{
    const double rad_to_deg=180.0/M_PI;
    std::cout<<"distance = "<<dapos.distance;
    std::cout<<"angel = "<<dapos.angle;
    std::cout<<"degree\n";
    std::cout<<yanlei<<std::endl;
    //yanlei=200;
	
}
