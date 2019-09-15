class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3||nums.front()>0||nums.back()<0) return {};
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++)
        {
            int fix=nums[i];
            if(fix>0) break;
            if(i>0&&fix==nums[i-1])
                continue;
            int l=i+1;
            int r=nums.size()-1;
            while(l<r)
            {
                if(nums[l]+nums[r]==-fix)
                {
                    if(l==i+1 || r==nums.size()-1)
                    {
                        res.push_back(vector<int>{nums[i],nums[l],nums[r]});
                        l++;
                        r--;
                    }
                    else if(nums[l]==nums[l-1])
                        l++;
                    else if(nums[r]==nums[r+1])
                        r--;
                    else
                    {
                        res.push_back(vector<int>{nums[i],nums[l],nums[r]});
                        l++;
                        r--;
                    }
                }
                else if(nums[l]+nums[r]<-fix)
                    l++;
                else r--;
            }
        }
        return res;
    }
};

作者：gpe3DBjDS1
链接：https://leetcode-cn.com/problems/3sum/solution/san-shu-zhi-he-by-gpe3dbjds1/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
