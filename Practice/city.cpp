#include<bits/stdc++.h>

using namespace std;
 int main(int argc, char const *argv[])
 {
     int m;
     cin>>m;
     if (m<2)
     {
cout<<"False"<<endl;
         /* code */
     }
     
        for (int i = 2; i < m; i++)
        {
            if (m%i==0)
            {
                break;
                /* code */
            }
            if (i==m)
            {
                cout<<"True"<<endl;
            }
            else
            {
                cout<<"False"<<endl;
            }
            
            
            
            /* code */
        }
        
     return 0;
 }
 