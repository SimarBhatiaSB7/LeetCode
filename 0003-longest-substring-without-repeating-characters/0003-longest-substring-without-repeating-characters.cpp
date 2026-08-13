class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> substring;
        int l = 0;
        int length = 0;

        for(int r = 0; r < s.length(); r++){
            while(substring.count(s[r])){
                substring.erase(s[l]);
                l++;
            }
            substring.insert(s[r]);
            length = max(length, r - l + 1);
        }
        return length;
    }
};