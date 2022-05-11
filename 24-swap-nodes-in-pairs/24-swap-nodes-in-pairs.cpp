class Solution {
public:
	ListNode* swapPairs(ListNode* head) {
		if(!head || !head->next) return head;
		
		ListNode* prev=head;ListNode* curr=head;
		head=head->next;
		while(curr && curr->next){
			prev->next=curr->next;

			prev=curr;
			curr=curr->next;
			prev->next=curr->next;
			curr->next=prev;
			curr=curr->next->next;}
		return head;

	}
};