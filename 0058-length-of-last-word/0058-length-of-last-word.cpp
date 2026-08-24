class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<std::string> words;
        std::stringstream ss(s);
        std::string word;

        while (ss >> word){
            words.push_back(word);
        }

        return words.back().size();
    }
};