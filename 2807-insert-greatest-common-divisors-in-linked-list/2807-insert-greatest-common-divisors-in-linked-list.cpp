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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* temp=head;
        while(temp!=nullptr && temp->next!=nullptr)
        {
            int g=gcd(temp->val,temp->next->val);
            ListNode* t=new ListNode(g);
            ListNode* copy=temp->next;
            temp->next=t;
            t->next=copy;
            temp=temp->next->next;
        }
        return head;
    }
};