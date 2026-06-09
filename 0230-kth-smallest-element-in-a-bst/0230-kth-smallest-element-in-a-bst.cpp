class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {

        vector<int> ans;
        queue<TreeNode*> s;

        s.push(root);

        while (!s.empty()) {

            TreeNode* it = s.front();
            s.pop();

            if (it == nullptr)
                continue;

            ans.push_back(it->val);

            if (it->left)
                s.push(it->left);

            if (it->right)
                s.push(it->right);
        }

        sort(ans.begin(), ans.end());

        return ans[k - 1];
    }
};