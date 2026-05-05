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
    ListNode* rotateRight(ListNode* head, int k) {
     if(k==0 || head==nullptr) return head;
     int count=0;
     ListNode* temp=head;
     while(temp!=nullptr)
     {
        count++;
        temp=temp->next;
     }    
     k=k%count;
     if(k==0) return head;
    int travel=count-k;

    temp=head;
    ListNode* pre=nullptr;
    while(travel--)
    {
        pre=temp;
        temp=temp->next;
    }
    pre->next=nullptr;
    ListNode* end=temp;

    while(end->next!=nullptr)
    {
        end=end->next;
    }
    end->next=head;
    return temp;
    }
};