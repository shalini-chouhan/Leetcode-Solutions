class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return NULL;
        int size = 0;
        ListNode* first = head;
        while(first){
            size++;
            first = first -> next;
        }
        size = size/2-1;
        first = head;
        while(size--) first = first->next;
        if(first->next->next) first->next = first->next->next;
        else first->next = NULL;
        first = head;
        return head;
    }
};