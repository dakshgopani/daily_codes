// https://leetcode.com/problems/single-element-in-a-sorted-array/description/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int left = 1, right = n - 2;
        int ans = 0;

        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n - 1] != nums[n - 2]) return nums[n - 1];

        while(left <= right){
            int mid = (left + right) / 2;

            if(nums[mid + 1] != nums[mid] && nums[mid - 1] != nums[mid]) ans = nums[mid];

            if((mid % 2 == 1 && nums[mid - 1] == nums[mid]) || (mid % 2 == 0 && nums[mid] == nums[mid + 1])) left = mid + 1;

            // before the single element all pairs are (even, odd) so if we get our mid as odd we check for the mid - 1 idx as to be even and vice versa 

            else right = mid - 1;

        }
        return ans;
        
    }
};