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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(head==nullptr || head->next==nullptr) return nullptr;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
      
      ListNode* pre=nullptr;
      ListNode* nexti=nullptr;
      fast=head;
      while(fast!=nullptr)
      {
           if(fast==slow)
           {
            nexti=fast->next;
            break;
           }

           pre=fast;
           fast=fast->next;
      }


     if(pre->next!=nullptr) pre->next=nexti;

      return head;
    }
};