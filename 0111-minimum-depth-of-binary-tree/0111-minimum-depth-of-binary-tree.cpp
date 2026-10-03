class Solution {
public:
    int ans = INT_MAX;
    void dfs(TreeNode* root, int depth) {
        if (root == nullptr) {
            return;
        }
        if (root->left == nullptr && root->right == nullptr) {
            ans = min(ans, depth);
            return;
        }
        dfs(root->left, depth + 1);
        dfs(root->right, depth + 1);
    }

    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        dfs(root, 1);
        return ans;
    }
};