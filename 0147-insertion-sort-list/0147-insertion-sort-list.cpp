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
    ListNode* insertionSortList(ListNode* head) {
        vector<int> forsort;
        ListNode* t=head;
        while(t!=nullptr)
        {
            forsort.push_back(t->val);
            t=t->next;
        }
        sort(forsort.begin(),forsort.end());
        int j=0;
        t=head;
        while(t!=nullptr)
        {
            t->val=forsort[j++];
            t=t->next;
        }
     return head;
    }
};