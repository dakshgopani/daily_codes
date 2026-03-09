// https://leetcode.com/problems/minimum-capacity-box/description/

class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mini = INT_MAX;
        for(int i = 0; i < capacity.size(); i++){
            if(capacity[i] >= itemSize){
                mini = min(mini, capacity[i]);
                // break;
            }
        }
        
        for(int i = 0; i < capacity.size(); i++){
            if(mini == capacity[i]){
                return i;
                break;
            }
        }
        return -1;
    }
};