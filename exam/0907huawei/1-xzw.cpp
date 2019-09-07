#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> vec;
    int a;
    while (cin>>a)
    {
        vec.push_back(a);
    }
    if (vec.size()==0)
    {
        cout<<0;
        /* code */
    }
    
    int size=vec.size();
    int length=size/2;
    vector<int> number;
    for (int i = 1; i < length; i++)
    {
        int count=1;
        int sum=i;
        while (sum<vec.size())
        {
            if (sum==vec.size()-1)
            {
                break;
                /* code */
            }
            count++;
            
            if (vec[sum]==0)
            {
            number.push_back(-1);
            break;
                /* code */
            }
            
            sum+=vec[sum];
            number.push_back(count);
            /* code */
        }
        sort(number.begin(),number.end());
        auto iter=find_if(number.begin(),number.end(),[](int i)->bool{return i>1;});
        cout<<*iter;
        
        /* code */
    }
    
    
    return 0;
}
