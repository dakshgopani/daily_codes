// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

    class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            unordered_map<int, int> freq;
            vector<int> arr;

            for(int i = 0; i < nums.size(); i++){
                freq[nums[i]]++;
            }

            for(int i = 1; i <= nums.size(); i++){
                if(freq[i] == 0) arr.push_back(i);
            }
            return arr;
        }
    };