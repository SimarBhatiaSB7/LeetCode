class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;

        for (auto& k : knowledge) {
            mp[k[0]] = k[1];
        }

        string ans;
        string key;
        bool read = false;

        for (char c : s) {
            if (c == '(') {
                read = true;
                key.clear();
            }
            else if (c == ')') {
                read = false;

                if (mp.find(key) != mp.end())
                    ans += mp[key];
                else
                    ans += "?";
            }
            else if (read) {
                key += c;
            }
            else {
                ans += c;
            }
        }
        return ans;
    }
};