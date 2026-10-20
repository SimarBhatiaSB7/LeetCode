class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> str(word.begin(), word.end());
        int count = 0;
        for(char ch = 'a'; ch <= 'z'; ch++) {
            if(str.count(ch) && str.count(ch - 'a' + 'A')) {
                count++;
            }
        }
        return count;
    }
};