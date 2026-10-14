class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> a;
        unordered_map<string, char> b;

        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word)
            words.push_back(word);

        if (pattern.size() != words.size())
            return false;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];

            if (a.find(c) != a.end() && a[c] != w)
                return false;

            if (b.find(w) != b.end() && b[w] != c)
                return false;

            a[c] = w;
            b[w] = c;
        }

        return true;
    }
};