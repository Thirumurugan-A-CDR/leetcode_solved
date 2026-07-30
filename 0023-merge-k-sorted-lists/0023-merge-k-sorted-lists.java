/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        List<Integer> values=new ArrayList<>();
        for(int i=0;i<lists.length;i++)
        {
            ListNode temp=lists[i];
            while(temp!=null)
            {
                values.add(temp.val);
                temp=temp.next;
            }
        }
        Collections.sort(values);
        ListNode head=null;
        ListNode tail=head;
        for(int i=0;i<values.size();i++)
        {
            ListNode newnode=new ListNode(values.get(i));
            if(head==null)
            {
               head=tail=newnode;
            }
            else
            {
                tail.next=newnode;
                tail=newnode;
            }
        }
        return head;
        
        
    }
}