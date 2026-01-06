// https://leetcode.com/problems/palindrome-number/description/?envType=problem-list-v2&envId=maths-m1-arithmetic-basic-reasoning 

class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long num = 0;

        while(temp > 0){
            int rem = temp % 10;
            num = num * 10 + rem;
            temp /= 10;
        }

        if(num == x) return true;
        else return false;
        
    }
};