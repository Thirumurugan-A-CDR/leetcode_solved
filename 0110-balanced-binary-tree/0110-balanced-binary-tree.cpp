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
   int func(TreeNode* root)
   {
    if(root==nullptr)
    {
        return 0;
    }
        
      int leftlength=func(root->left);
      if(leftlength==-1) return -1;

      int rightlength=func(root->right);
      if(rightlength==-1) return -1;

      if(abs(leftlength-rightlength)>1)
      {
        return -1;
      }

      return 1+max(leftlength,rightlength);
      

   }

    bool isBalanced(TreeNode* root) {
        return func(root)!=-1;
    }
};