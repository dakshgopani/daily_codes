// https://leetcode.com/problems/count-binary-substrings/description/

class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 0, i = 1, prev = 0, curr = 1;
        int n = s.size();

        while(i < n){
            if(s.at(i - 1) != s.at(i)){
                count += min(prev, curr);
                prev = curr;
                curr = 1;
            }
            else{
                curr++;
            }
            i++;
        }

        count += min(prev, curr);
        return count;
        
    }
};