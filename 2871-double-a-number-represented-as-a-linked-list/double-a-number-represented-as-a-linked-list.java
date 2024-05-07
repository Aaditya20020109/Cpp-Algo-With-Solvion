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
    public ListNode reverse(ListNode head)
    {
        ListNode curr = head;
        ListNode prev = null;
        ListNode next = null;
        while(curr!=null)
        {

            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;


        }

        return prev;
    }
    public ListNode doubleIt(ListNode head) {

        head = reverse(head);
        int carry = 0;
        ListNode temp = head;

        while(temp != null)
        {
            int n = 2*(temp.val) + carry;
            int curr_ListNode_data = n % 10;
            carry = n / 10;


            temp.val = curr_ListNode_data;
            if(temp.next!=null)
            {
                temp=temp.next;
            }else{
                break;
            }
        }

        if(carry > 0)
        {
            temp.next = new ListNode(carry);
        }

        return reverse(head);
        
    }
}