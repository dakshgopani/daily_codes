// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool ans = false;
        for(int i = 0; i < n; i++){
            if(nums[i] > nums[(i + 1) % n]){
                if(ans) return false;
                ans = true;
            }
        }
        return true;
    }
};