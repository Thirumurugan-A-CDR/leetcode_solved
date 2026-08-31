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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans;
        int minadis=INT_MAX;
        int maxans=INT_MIN;
        vector<int> presentpos;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int currpos=1;
        int previouspos=1;
        if(head==NULL || head->next==NULL || head->next->next==NULL)
        {
            return {-1,-1};
        }
        ListNode* pre=head;
        ListNode* curr=head->next;
        ListNode* next=head->next->next;
        while( curr!=nullptr && curr->next!=nullptr)
        {
           if(pre->val<curr->val && curr->val>next->val)
           {
              if(currpos!=previouspos && !presentpos.empty())
              {
                minadis=min(minadis,currpos-previouspos);
              }
              previouspos=currpos;
              presentpos.push_back(currpos);
              
           }

           else if(pre->val>curr->val && curr->val<next->val)
           {
               if(currpos!=previouspos && !presentpos.empty())
              {
                minadis=min(minadis,currpos-previouspos);
              }
              previouspos=currpos;
              presentpos.push_back(currpos);
             
           }

           pre=curr;
           curr=next;
           next=curr->next;
           currpos++;
        }
    
       if(minadis!=INT_MAX) ans.push_back(minadis);
       else
       {
        ans.push_back(-1);
       }    
       if(presentpos.size()<2) ans.push_back(-1);
       else
       {
        int mini=*min_element(presentpos.begin(),presentpos.end());
        int maxi=*max_element(presentpos.begin(),presentpos.end());
        ans.push_back(maxi-mini);
       }
       return ans;
    }
};