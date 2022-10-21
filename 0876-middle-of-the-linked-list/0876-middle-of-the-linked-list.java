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
    public ListNode middleNode(ListNode head) {
        ListNode l1 = head, l2 = head;
        while(l2 != null && l2.next != null){
            l1 = l1.next;
            l2 = l2.next.next;
        }
        return l1;
    }
}