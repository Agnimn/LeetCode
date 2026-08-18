class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> char_count;

        int left = 0;
        int longest = 0;
        int max_freq = 0;

        for (int right = 0; right < s.length(); right++) {

            // Add current character
            char_count[s[right]]++;

            // Keep track of most frequent character
            max_freq = max(max_freq, char_count[s[right]]);

            // Shrink window if replacements needed > k
            while ((right - left + 1) - max_freq > k) {
                char_count[s[left]]--;
                left++;
            }

            // Current valid window
            longest = max(longest, right - left + 1);
        }

        return longest;
    }
};