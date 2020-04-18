#include <iostream>
#include "coordin.h"
using namespace std;
extern const int yanlei =100;
int main()
{
    rect rplace;
    polor pplace;

    cout<<"enter x y \n";
    while(cin>>rplace.x>>rplace.y)
    {
        pplace=rect_to_polor(rplace);
        showpolor(pplace);
        cout<<"next two numbei ,q to quit";

    }
    cout<<"bye\n";
	showvalue(yanlei);
    return 0;
}    
