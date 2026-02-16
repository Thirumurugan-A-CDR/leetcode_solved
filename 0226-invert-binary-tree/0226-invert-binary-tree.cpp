/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void mirrorfun(TreeNode* t)
    {
        if(t==nullptr)
        {
            return;
        }
        TreeNode* t1=t->left;
        t->left=t->right;
        t->right=t1;
        mirrorfun(t->left);
        mirrorfun(t->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        mirrorfun(root);
        return root;
    }
};