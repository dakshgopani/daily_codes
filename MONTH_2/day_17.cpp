// https://leetcode.com/problems/toggle-light-bulbs/description/

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_set<int> st;

        for(int bulb: bulbs){
            if(st.count(bulb)) st.erase(bulb);
            else st.insert(bulb);
        }

        vector<int> arr(st.begin(), st.end());
        sort(arr.begin(), arr.end());

        return arr;
        
    }
};