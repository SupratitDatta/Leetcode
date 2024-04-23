/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }
        ListNode* tempa = headA;
        ListNode* tempb = headB;

        while (tempa != tempb) {
            tempa = (tempa == nullptr) ? headB : tempa->next;
            tempb = (tempb == nullptr) ? headA : tempb->next;
        }
        return tempa;
    }
};