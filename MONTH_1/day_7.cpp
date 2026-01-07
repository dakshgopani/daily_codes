// https://leetcode.com/problems/set-mismatch/description/?envType=problem-list-v2&envId=dsa-linear-shoal-array-ii

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int duplicate = -1, missing = -1;
        int n = nums.size();

        for(int i = 0; i < n - 1; i++){
            if(nums[i] == nums[i + 1]){
                duplicate = nums[i];
            }
            if(nums[i + 1] - nums[i] > 1){
                missing = nums[i] + 1;
            }
        }
        
        if(nums[0] != 1) missing = 1;
        if(nums[n - 1] != n) missing = n;
        
        return {duplicate, missing};
    }
};