/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode fast = head.next, slow = head;
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
        }
        return slow;
    }

    public ListNode reverse(ListNode head) {
        ListNode curr = head;
        ListNode next = null, prev = null;
        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;

        }
        return prev;
    }

    public void reorderList(ListNode head) {
        ListNode mid = middleNode(head);
        ListNode head2 = mid.next;
        mid.next = null;
        head2 = reverse(head2);

        ListNode curr = head;
        ListNode next = curr.next;
        while (head2 != null) {
            curr.next = head2;
            head2 = head2.next;
            curr = curr.next;
            curr.next = next;
            if (next != null) {
                curr = curr.next;
                next = curr.next;
            }

        }

    }
}