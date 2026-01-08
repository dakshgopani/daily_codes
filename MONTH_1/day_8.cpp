// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/?envType=problem-list-v2&envId=dsa-linear-shoal-array-ii

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int curr = nums[i];
            int count = 0;
            
            for(int j = 0; j < n; j++){
                if(nums[j] < curr) count++;
            }
            arr.push_back(count);
        }
        return arr;
    }
};