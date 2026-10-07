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
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr || head->next==nullptr) return head;
        vector<int> before,after;
        ListNode* h=head;
        while(h!=nullptr)
        {
            if(h->val<x)
            {
                before.push_back(h->val);
            }
            else
            {
                after.push_back(h->val);
            }
            h=h->next;
        }
        int j=0;
        h=head;
        while(j<before.size())
        {
            h->val=before[j];
            j++;
            h=h->next;
        }
        j=0;
        while(j<after.size())
        {
            h->val=after[j];
            j++;
            h=h->next;
        }
        return head;
    }
};