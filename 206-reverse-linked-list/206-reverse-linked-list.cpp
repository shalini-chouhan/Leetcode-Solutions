class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         struct ListNode *p , *q , *r;
	p=head;
	r=q=NULL;
	
	while(p!=NULL) {
		q=p->next;
		p->next=r;
		r=p;
		p=q;
	}
	head=r;
    return head;
    }
};