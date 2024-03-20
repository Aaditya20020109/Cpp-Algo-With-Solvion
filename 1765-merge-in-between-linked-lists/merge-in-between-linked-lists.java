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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode newNode = new ListNode(-1);
        newNode.next = list1;
        ListNode prev1 = newNode,prev2=newNode;
        ListNode p1 = list1,p2 = list1;
        int idx1 = 0,idx2=0;
        while(idx1<a || idx2<b+1)
        {
            if(idx1<a)
            {
                idx1+=1;
                prev1 = p1;
                p1 = p1.next;

            }


            if(idx2<b+1)
            {
                idx2+=1;
                prev2 = p2;
                p2 = p2.next;
            }
        } 


        ListNode end = list2;
        while(end.next!=null)
        {
            end = end.next;
        }   

        prev1.next = list2;
        prev2.next = null;
        end.next = p2; 
        return newNode.next;   
    }
}