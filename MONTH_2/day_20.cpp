// https://leetcode.com/problems/subsets-ii/description/

class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int idx){
        // base case if the index and size are equal then we push the temp array into the ans arr
        if(idx == nums.size()){
            ans.push_back(temp);
            return;
        }
        // yes call (consider one index at a time with the help of temp)
        temp.push_back(nums[idx]);
        solve(nums, temp, ans, idx + 1);
        // after the use pop
        temp.pop_back();

        // no call
        solve(nums, temp, ans, idx + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // sort because 4,1 and 1,4 are considered different in terms of vectors but the same in terms of sets. 
        // we need only 1 out of them

        vector<int> temp;
        vector<vector<int>> ans;

        solve(nums, temp, ans, 0);

        // as we dont want duplicates we convert 2Dvector -> set and then set -> 2Dvector again
        set<vector<int>> st;

        for(auto i: ans){
            st.insert(i);
        }

        vector<vector<int>> finalAns(st.begin(), st.end());

        return finalAns;
    }
};