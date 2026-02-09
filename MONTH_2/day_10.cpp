// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    int lowerBound(vector<int> &nums, int x){
        int left = 0, right = nums.size() - 1;
        int ans = nums.size();

        while(left <= right){
            int mid = (left + right) / 2;

            if(nums[mid] >= x){
                ans = mid;
                right = mid - 1;
            } 
            else {
                left = mid + 1;
            }
        }
        return ans;
    }

    int upperBound(vector<int> &nums, int x){
        int left = 0, right = nums.size() - 1;
        int ans = nums.size();

        while(left <= right){
            int mid = (left + right) / 2;

            if(nums[mid] > x){
                ans = mid;
                right = mid - 1;
            } 
            else {
                left = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerBound(nums, target);

        if(lb == nums.size() || nums[lb] != target) return {-1, -1};

        return {lb, upperBound(nums, target) - 1};
    }
};