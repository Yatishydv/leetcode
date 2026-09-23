// Problem: 414. Third Maximum Number
// Runtime: 3 ms (Beats 24.36%)
// Memory: 12.9 MB (Beats 74.22%)

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int n = nums.size();
        if(n>=3){
            return nums[n-3];
        }
        return nums[n-1];
    }
};