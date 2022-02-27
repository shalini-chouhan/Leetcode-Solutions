class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* temp=head;
        
        if(head==NULL)
        return head;
            
        while(temp->next!=NULL)
        { 
            if(temp->next->val == val)
            {
                temp->next = temp->next->next;
            }
            
            else
            temp = temp->next;
        }
        
        if(head->val == val)
        return head->next;
        
        return head;
    }
};