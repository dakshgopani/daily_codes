// https://leetcode.com/problems/smallest-pair-with-different-frequencies/description/

class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }

        set<int> uniqueValues(nums.begin(), nums.end());

        vector<int> finalAns(uniqueValues.begin(), uniqueValues.end());

        int m = finalAns.size();
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < m; j++){
                if(freq[finalAns[i]] != freq[finalAns[j]]){
                    return {finalAns[i], finalAns[j]};
                }
            }
        }
        return {-1, -1};
    }
};