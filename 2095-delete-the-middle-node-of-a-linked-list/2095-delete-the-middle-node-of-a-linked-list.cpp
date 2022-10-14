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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL) return NULL; 
        ListNode * l1 = head, *l2 = head;
        while(l2 != NULL){
            if(l2->next == NULL || l2->next->next == NULL) break;
                l2 = l2->next->next;
            if(l2->next!=NULL)
                l1 = l1->next;
        }
        l1->next = l1->next->next;
        return head;
    }
};