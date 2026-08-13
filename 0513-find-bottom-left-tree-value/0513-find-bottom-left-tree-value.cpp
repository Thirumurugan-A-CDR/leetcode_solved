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
     int maxlevel=0;
     int ans=0;
     void func(TreeNode* root,int curr_level)
     {
         
       if(root==nullptr)
       {
        return;
       }

       if(curr_level>maxlevel)
       {
        ans=root->val;
        maxlevel=curr_level;
       }
      
      func(root->left,curr_level+1);
      func(root->right,curr_level+1);



     }
    int findBottomLeftValue(TreeNode* root) {
        func(root,1);
        return ans;
    }
};