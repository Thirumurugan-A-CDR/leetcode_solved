class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {

        ListNode* temp = head;
        ListNode* dummy = new ListNode(0);
        ListNode* pre = dummy;
        ListNode* rr;
        int sum = 0;

        while (temp != nullptr) {

            if (temp->val == 0) {

                rr = temp;
                sum = 0;
                temp = temp->next;

                while (temp != nullptr && temp->val != 0) {
                    sum += temp->val;
                    temp = temp->next;
                }

                if (temp != nullptr) {
                    ListNode* ss = new ListNode(sum);
                    pre->next = ss;
                    pre = ss;
                }
            }
        }

        return dummy->next;
    }
};