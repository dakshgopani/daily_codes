// https://leetcode.com/problems/self-dividing-numbers/?envType=problem-list-v2&envId=maths-m2-divisibility-modular-arithmetic

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;

        for(int i = left; i <= right; i++){
            bool isSelfDividing = true;
            int temp = i;

            while(temp != 0){
                int rem = temp % 10;
                if(rem == 0 || i % rem != 0){
                    isSelfDividing = false;
                    break;
                }
                temp /= 10;
            }
            if(isSelfDividing){
                result.push_back(i);
            }
        }
        return result;
    }
};