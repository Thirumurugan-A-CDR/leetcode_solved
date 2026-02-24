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
    vector<string> ans;
    void order(TreeNode* root,string s)
    {
    
    if(root==NULL)
    {
       
        return;
    }
    s+=char('0'+root->val);
    if(root->left==NULL && root->right==NULL)
    {
        ans.push_back(s);
        return;
    }

    order(root->left,s);
    order(root->right,s);

    }
    int sumRootToLeaf(TreeNode* root) {
        string ans1="";
        order(root,ans1);
        int sum=0;

        for(auto it:ans)
        {
            sum+=stoi(it,0,2);
        }

        return sum;
     }

};