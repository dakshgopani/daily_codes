// https://leetcode.com/problems/concatenation-of-array/description/?envType=problem-list-v2&envId=dsa-linear-shoal-array-i

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> arr;

        for(int i = 0; i < nums.size(); i++){
            arr.push_back(nums[i]);
        }

        for(int i = 0; i < nums.size(); i++){
            arr.push_back(nums[i]);
        }

        return arr;
    }
};