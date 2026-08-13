class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;
        // left = start of the window
        // longest = length of the longest valid substring found so far
        int left =0, longest = 0;

        // Expand the window by moving the right pointer (i)
        for(int i =0; i< s.size(); i++){

            // If the current character already exists in the window,
            // remove characters from the left until the duplicate is removed
            while(mp.count(s[i])) {
                mp.erase(s[left]);
                left++;
            }
            // Add the current character to the window
            mp.insert(s[i]);

            int window_size = i - left + 1;

            // Keep track of the maximum window size found so far
            longest =  max(longest, window_size);
        }
        return longest;
    }
};