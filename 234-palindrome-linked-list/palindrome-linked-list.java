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
    public ListNode middleNode(ListNode head)
    {
        ListNode slow = head;
        ListNode fast = head.next;
        while(fast!=null && fast.next!=null)
        {
            fast = fast.next.next;
            slow = slow.next;
        }
        return slow;
    }
    public ListNode  reverseNode(ListNode head)
    {
        ListNode curr = head;
        ListNode next=null,prev=null;
        while(curr!=null)
        {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;

        }
        return prev;
    }
    public boolean isPalindrome(ListNode head) {

        ListNode midNode = middleNode(head);
        ListNode head2 =midNode.next;
        midNode.next = null;
        head2 = reverseNode(head2);
         while(head!=null && head2!=null)
         {
            if(head2.val!=head.val)return false;
            head = head.next;
            head2 = head2.next;
         }
         return true;
         

        
    }
}