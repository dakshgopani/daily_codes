// https://leetcode.com/problems/first-element-with-unique-frequency/

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> freqCount;
        int ans = -1;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto &p : freq){
            freqCount[p.second]++;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(freqCount[freq[nums[i]]] == 1) return nums[i];
            // else return 
        }

        return -1;
    }
};