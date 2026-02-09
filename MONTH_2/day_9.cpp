// https://takeuforward.org/plus/dsa/problems/floor-and-ceil-in-sorted-array

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int left = 0, right = nums.size() - 1;
        int floor = -1, ceil = -1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (nums[mid] == x) {
                floor = x;
                ceil = x;
                break;
            }
            else if (nums[mid] < x) {
                floor = nums[mid];
                left = mid + 1;
            }
            else { // nums[mid] > x
                ceil = nums[mid];
                right = mid - 1;
            }
        }

        return {floor, ceil};
    }
};
