/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* head,Node* insertnode)
    {
        if(head==NULL)
        {
            head=insertnode;
        }
        else
        {
            Node* tt=head;
            while(tt->next!=NULL)
            {
                tt=tt->next;
            }
            tt->next=insertnode;
        }
            return head;

    }
    Node* connect(Node* root) {
        queue<Node*> q;
        vector<vector<Node*>> ans;
        q.push(root);
        if(root==NULL)
        {
            return root;
        }
        while(!q.empty())
        {
                int size=q.size();
                vector<Node*> temp;
                for(int i=0;i<size;i++)
                {
                    Node* curr=q.front();
                    q.pop();
                    temp.push_back(curr);

                    if(curr->left!=NULL)
                    {
                        q.push(curr->left);
                    }
                    if(curr->right!=NULL)
                    {
                        q.push(curr->right);
                    }
                }
                ans.push_back(temp);
            }

            for(int i=0;i<ans.size();i++)
            {
                Node* t=NULL;
                for(int j=0;j<ans[i].size();j++)
                {
                    t=connect(t,ans[i][j]);
                }
            }
            return root;
        }

};