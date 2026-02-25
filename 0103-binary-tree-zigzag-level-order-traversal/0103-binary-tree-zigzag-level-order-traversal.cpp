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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> sol;
        queue<TreeNode*> q;
        if(root==NULL)
        {
            return sol;
        }
        q.push(root);
        bool l=true;
        while(!q.empty())
        {

            int n=q.size();
            vector<int> temp(n);
            for(int i=0;i<n;i++)
            {
            TreeNode* current=q.front();

            q.pop();
                
              int index=(l)?i:(n-i-1);

               temp[index]=current->val;

               if(current->left)
               {
                q.push(current->left);
               } 

               if(current->right)
               {
                q.push(current->right);
               }



            }
            l=!l;
            sol.push_back(temp);
        }
        return sol;
    }
};