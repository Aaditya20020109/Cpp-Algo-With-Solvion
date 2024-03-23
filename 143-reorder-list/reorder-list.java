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
        ListNode fast = head.next,slow = head;
        while(fast!=null && fast.next!=null)
        {
            fast = fast.next.next;
            slow = slow.next;
        }
        return slow;
    }
    public void reorderList(ListNode head) {
        ListNode mid =  middleNode(head);
        ListNode head2 = mid.next;
        mid.next = null;
        Stack<ListNode> st = new Stack();
        while(head2!=null)
        {
            st.push(head2);
            head2 = head2.next;
        }

        ListNode curr = head;
        ListNode next = curr.next;
        while(!st.isEmpty())
        {
            curr.next = st.peek();
            st.pop();
            curr = curr.next;
            curr.next = next;
           if(next!=null)
           {
             curr = curr.next;
            next = curr.next;
           }
        }

     
        
    }
}