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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int c=0,i=0;
        while(temp){
            c++;
            temp = temp->next;
        }
        temp = head;
        if (c == n){
            head = head->next;
            return head;
        }
        
        while (i < (c-n-1)) {
            temp = temp->next;
            i++;
        }
        if (temp->next != nullptr) {
            temp->next = temp->next->next;
        }
        return head;
    }
};