class Solution {
public:
    int maxDepth(string s) {
        int depth = 0, res = 0;
        for (char c : s) {
            if (c == '(') {
                depth++;
                if (depth > res) res = depth;
            } else if (c == ')') {
                depth--;
            }
        }
        return res;
    }
};