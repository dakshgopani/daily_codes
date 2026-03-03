// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

class Solution {
public:
    int sumOfDivisor(vector<int>& nums, int divisor, int n){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += ceil((double) nums[i] / (double) divisor);
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxi = INT_MIN;

        for(int i = 0; i < n; i++) maxi = max(nums[i], maxi);

        int low = 1, high = maxi;
        int ans = -1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(sumOfDivisor(nums, mid, n) <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }
};