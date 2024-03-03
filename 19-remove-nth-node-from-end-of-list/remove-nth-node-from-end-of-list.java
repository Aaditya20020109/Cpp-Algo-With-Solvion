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
    public ListNode reverseList(ListNode head)
    {
        ListNode curr = head;
        ListNode prev = null,next = null;
        while(curr!=null)
        {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode newNode = new ListNode(-1);
        newNode.next = reverseList(head);
        ListNode prev = newNode;
        ListNode curr = newNode.next;
        int nodeIndex = 1;
        while(nodeIndex!=n )
        {
            prev = curr;
            curr = curr.next;

            nodeIndex+=1;
        }
        prev.next = curr.next;

        return reverseList(newNode.next);
        

        
    }
}