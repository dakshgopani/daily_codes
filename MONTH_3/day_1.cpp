// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/

class Solution {
public:
    static bool compare(int a, int b){
        if(__builtin_popcount(a) == __builtin_popcount(b)){ // if two nums have same set bits then smaller number first
         // __builtinpopcount() returns the number of set bits (1s) 
        // eg for 4 it returns 1 for 5 2
            return a < b;
        }
        return __builtin_popcount(a) < __builtin_popcount(b);
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};