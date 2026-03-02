// https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    long long hourlyCalculation(vector<int>& piles, int hours){
        long long total_hours = 0;

        for(int i = 0; i < piles.size(); i++){
            total_hours += ceil((double) piles[i] / (double) hours); // type casting because we want ceil value so int wont work
        }

        return total_hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            maxi = max(piles[i], maxi);
        }

        int low = 1, high = maxi; // binary search on answers so this is the ans space from left to right

        while(low <= high){
            int mid = (low + high) / 2;
            long long total_hours = hourlyCalculation(piles, mid);

            if(total_hours <= h) high = mid - 1;
            else low = mid + 1;
        }

        return low;
        
    }
};