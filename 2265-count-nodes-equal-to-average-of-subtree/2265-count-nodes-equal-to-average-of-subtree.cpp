class Solution {
public:
    pair<int, int> traverse(TreeNode* root, int& count) {
        if(root == nullptr) return {0, 0};

        auto [leftSum, leftCount] = traverse(root->left, count);
        auto [rightSum, rightCount] = traverse(root->right, count);

        int subtreeSum = leftSum + rightSum + root->val;
        int subtreeCount = leftCount + rightCount + 1;

        if(subtreeSum / subtreeCount == root->val) count++;

        return {subtreeSum, subtreeCount};
    }

    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        traverse(root, count);
        return count;
    }
};