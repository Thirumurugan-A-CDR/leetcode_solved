/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> ss;
        while(head!=nullptr)
        {
            ss.push_back(head->val);
            head=head->next;
        }
        int ans=INT_MIN;
        int i=0,j=ss.size()-1;
        while(i<j)
        {
            ans=max(ans,ss[i]+ss[j]);
            i++;
            j--;
        }

        return ans;
    }
};