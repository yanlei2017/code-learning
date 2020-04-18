
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int> ans;
            double s;
            for(auto i :nums1){
             ans.push_back(i);
            }
            for(auto j :nums2){
             ans.push_back(j);
            }
             sort(ans.begin(),ans.end());
             if(ans.size()%2==0){
                 double left=ans[ans.size()/2-1];
                 double right = ans[ans.size()/2]
;                 s=(left+right)/2;
             }else
             {
                 s= ans[ans.size()/2];
             }
             return s;
    }
};

int main(){
                vector<int> a={1,2};
                vector<int> b={3,4};
                Solution s;
                double sss = s.findMedianSortedArrays(a,b);
                return 0;

}