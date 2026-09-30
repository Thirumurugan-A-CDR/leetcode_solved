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
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int> s;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            s.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<s.size() && i+k<=s.size();i+=k)
        {
            reverse(s.begin()+i,s.begin()+i+k);
        }
        temp=head;
        int i=0;
        while(temp!=nullptr)
        {
            temp->val=s[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};