class Solution {
public:
    int ans = 0;

    pair<int, int> func(TreeNode* root) {
        
      
        if (root == NULL) {
            return {0, 0};
        }

        pair<int, int> left = func(root->left);

        pair<int, int> right = func(root->right);

        int sum = root->val + left.first + right.first;
        int count = 1 + left.second + right.second;

        if (sum / count == root->val) {
            ans++;
        }

      
        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {
        func(root);
        return ans;
    }
};