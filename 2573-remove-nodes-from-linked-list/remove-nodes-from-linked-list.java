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
        if(head==null || head.next==null)return head;
        ListNode rest = reverse(head.next);
        head.next.next = head;
        head.next = null;
        return rest;
    }
    public ListNode removeNodes(ListNode head) {
        ListNode newNode = new ListNode(-1);
        ListNode temp = newNode ;
        Stack<Integer> s=new Stack<>();
        ListNode t = reverse(head);
        while(t!=null)
        {
            if(!s.isEmpty() && t.val<s.peek()){t=t.next;}
            else {s.push(t.val);t=t.next;}

        }
        while(!s.isEmpty())
        {
            temp.next = new ListNode (s.pop());
            temp =  temp.next;
        }
        return newNode.next;

        
        
    }
}