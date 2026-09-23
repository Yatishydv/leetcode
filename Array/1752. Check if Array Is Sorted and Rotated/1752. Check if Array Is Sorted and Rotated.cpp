// Problem: 1752. Check if Array Is Sorted and Rotated
// Runtime: 0 ms (Beats 100.00%)
// Memory: 11.1 MB (Beats 98.81%)

class Solution {
public:
    bool check(vector<int>& nums) {
        int drop = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                drop++;
            }
        }
        if(drop>1) return false;
        else return true;
    }
};