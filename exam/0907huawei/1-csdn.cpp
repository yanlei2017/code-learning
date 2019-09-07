#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<iterator>
using namespace std;

vector<int> leaststep(vector<int> input){
    if (input.size()==1)
    {
        return input;
        /* code */
    }
     map<int,vector<int> > substep;
    for (int i = 1; i < input[0]; i++)
    {
        if (i+1<input.size())
        {
            vector<int> next(input.size()-1);
            for (int i = 0; i < next.size(); i++)
            {
                next[i]=input[i+1];
            }
            vector<int> nextstep=leaststep(next);
            vector<int> currstep(nextstep.size()+1);
            currstep[0]=input[0];
            copy(nextstep.begin(),nextstep.end(),currstep.begin()+1);
            substep.insert(map<int,vector<int> >::value_type(i,currstep));
        }else if (1+i==input.size())
        {
            vector<int> hh;
            hh.assign(input.begin(),input.end());
            return hh;
            /* code */
        }else if (1+i>input.size())
        {
            break;
            /* code */
        }

        vector<int> leaststep;
        int stepnum=substep.end()->first;
        map<int,vector<int> >::iterator it;
        for ( it = substep.begin(); it !=substep.end(); it++)
        {
            if (it->second.size()<stepnum)
            {
                leaststep=it->second;
                stepnum=it->second.size();
            }

        }
        return leaststep;

    }
    
    
}
 int main(int argc, char const *argv[])
 {
     vector<int> input,output;
     while (cin)
     {
         int temp=0;
         cin>>temp;
         input.push_back(temp);
     }
     output=leaststep(input);
     copy(output.begin(),output.end(),ostream_iterator<int>(cout," "));
     

     
     return 0;
 }
 