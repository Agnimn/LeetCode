class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        while( i < j){
            while(i < j && !iswalnum(s[i])){
                i++;
            }
            while(i < j && !iswalnum(s[j])){
                j--;

            }
            if(toupper(s[i]) != toupper(s[j])){
                return false;
            }
            
            i++;
            j--;
        }
        return true;
    }
};