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
    int mini(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lefth=mini(root->left);
        int righth=mini(root->right);
        if(root->left==NULL)
        {
        return 1+righth;
        }
        if(root->right==NULL)
        {
            return 1+lefth;
        }
        return 1+min(lefth,righth);
    }
    int minDepth(TreeNode* root) {
        return mini(root);
    }
};