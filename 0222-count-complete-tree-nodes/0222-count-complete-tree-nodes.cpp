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
   int count(TreeNode* root,int c)
   {
       if(root==NULL) return 0;
       
       int left=count(root->left,c++);
       int right=count(root->right,c++);

       return left+right+1;
   }
    int countNodes(TreeNode* root) {
        return count(root,0);
    }
};