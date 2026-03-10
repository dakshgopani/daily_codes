// https://leetcode.com/problems/trim-trailing-vowels/description/

class Solution {
public:
    string trimTrailingVowels(string s) {
        int n = s.size();
        int right = n - 1;
        
        while(right >= 0){
            
            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u'){
            s.erase(right, 1);
            right--;
            }
            else break;
        }

        return s;
        
    }
};