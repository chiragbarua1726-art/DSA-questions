class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (left == right)
            return head;
        if (head == NULL)
            return NULL;

        ListNode* t = head;
        ListNode* before = NULL;
        int pos = 1;

        
        while (t != NULL) {
            if (pos < left) {
                before = t;
                t = t->next;
                pos++;
                continue;
            }

            ListNode* curr = t;
            ListNode* prev = NULL;
            int times = right - left + 1;

            while (times--) {
                ListNode* nex = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nex;
            }

            
            t->next = curr;

            if (before) {
                before->next = prev;
                return head;
            }

            
            return prev;
        }

        return head;
    }
};