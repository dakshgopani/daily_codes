// https://leetcode.com/problems/subsets/

class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int idx){
        // base case
        if(idx == nums.size()){
            ans.push_back(temp); // 1 subset completed so push to the ans vector
            return;
        }

        // yes call
        temp.push_back(nums[idx]);
        solve(nums, temp, ans, idx + 1);

        // remove that element (backtrack)
        temp.pop_back();

        // no call (skip that element)
        solve(nums, temp, ans, idx + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(nums, temp, ans, 0);

        return ans;
    }
};