
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        ListNode* next_next ;
        
        if(current == NULL){
            return NULL;
        }
        
        while(current -> next != NULL){
            if(current -> val == current -> next -> val){
                current -> next = current -> next ->next;
                current -> next = next_next;
            }
            else current = current -> next ; 
        }
        return head ;
    }
};