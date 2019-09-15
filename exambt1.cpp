vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n; ++i){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            
            int l = i + 1;
            int r = n - 1;
            
            while(l < r){
                while(l > i+1 && l < r && nums[l] == nums[l-1]){
                    l++;
                }
                while(r < n-2 &&  l < r && nums[r] == nums[r+1]){
                    r--;
                }
                if(l < r){
                    int sum = nums[i] + nums[l] + nums[r];
                    if(sum == 0){
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[l]);
                        t.push_back(nums[r]);
                        ans.push_back(t);
                        l++;
                        r--;
                    }else if(sum < 0){
                        l++;
                    }else{
                        r--;
                    }
                }
            }
        }
        
        return ans;
    }

作者：mike-meng
链接：https://leetcode-cn.com/problems/3sum/solution/er-shua-liu-ming-by-mike-meng-9/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
