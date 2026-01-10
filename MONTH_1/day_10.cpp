// https://leetcode.com/problems/build-an-array-with-stack-operations/?envType=problem-list-v2&envId=dsa-linear-shoal-stack

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;
        int idx = 0;

        for(int i = 1; i <= n; i++){
            if(idx == target.size()) break;

            ops.push_back("Push");

            if(i == target[idx]) idx++;
            else ops.push_back("Pop");
        }
        return ops;
    }
};