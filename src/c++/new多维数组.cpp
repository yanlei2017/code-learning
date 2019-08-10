#include<iostream>

using namespace std;
 

 int main(int argc, char const *argv[])
 {
     int (*fp)[3]=new int[2][3];
     for (size_t i = 0; i < 2; i++)
     {
         for (size_t j = 0; j < 3; j++)
         {
             fp[i][j]=i+j;
         }
         
     }
        for (size_t i = 0; i < 2; i++)
     {
         for (size_t j = 0; j < 3; j++)
         {
             cout<<"fp["<<i<<"]["<<j<<"]="<<fp[i][j]<<endl;
         }
         
     }
     cout<<fp<<endl;
     cout<<*fp<<endl;
     cout<<&fp<<endl;
     cout<<&fp[0][0]<<endl;


     
     

     return 0;
 }
 