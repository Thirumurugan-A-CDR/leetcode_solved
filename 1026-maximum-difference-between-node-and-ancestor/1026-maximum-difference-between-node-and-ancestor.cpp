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
     int func(TreeNode* root,int minval,int maxval)
     {
       if(root==nullptr)
       {
          return maxval-minval;
       }

       
       minval=min(root->val,minval);

       maxval=max(root->val,maxval);


       int leftans=func(root->left,minval,maxval);
       int rightans=func(root->right,minval,maxval);

       return max(leftans,rightans);




     }


    int maxAncestorDiff(TreeNode* root) {
       return func(root,root->val,root->val); 
    }
};