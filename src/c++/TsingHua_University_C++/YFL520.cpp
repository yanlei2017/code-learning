#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
cout<<"                                                       "<<endl;
cout<<"                          YFL 520                     "<<endl;

    for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
        for (float x = -1.5f; x < 1.5f; x += 0.05f) {
            float a = x * x + y * y - 1;
            cout<<(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
        }
        cout<<('\n');
    
}
}
