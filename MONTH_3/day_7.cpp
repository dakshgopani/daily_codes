// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

class Solution {
public:
    int calculateDays(vector<int> &weights, int capacity){
        int day = 1, load = 0, n = weights.size();
        for(int i = 0; i < n; i++){
            if(load + weights[i] > capacity){
                day++;
                load = weights[i];
            }
            else load += weights[i];
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int maxi = INT_MIN;

        for(int i = 0; i < weights.size(); i++){
            sum += weights[i];
            maxi = max(maxi, weights[i]);
        }

        int low = maxi, high = sum;

        while(low <= high){
            int mid = (low + high) / 2;
            int daysReq = calculateDays(weights, mid);

            if(daysReq <= days) high = mid - 1;
            else low = mid + 1;
        }

        return low;   
    }
};