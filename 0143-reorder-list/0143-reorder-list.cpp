class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *p = head->next;
        vector<ListNode*> deque;
        while (p) {
            deque.push_back(p);
            p = p->next;
        }
        p = head;
        while (!deque.empty()) {
            p->next = deque.back();
            deque.pop_back();
            p = p->next;
            if (!deque.empty()) {
                p->next = deque.front();
                p = p->next;
                deque.erase(deque.begin());
            }
        }
        p->next = NULL;
    }
};