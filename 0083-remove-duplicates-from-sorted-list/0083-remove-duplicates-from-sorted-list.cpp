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
    ListNode* deleteDuplicates(ListNode* head) {
        struct ListNode* a = head;
        struct ListNode* b = head;

        while(a!= NULL){
            if(a->val==b->val){
                b->next = a->next;
            }
            else{
                b = b->next;
            }
            a = a->next;
        }
        return head;
    }
};