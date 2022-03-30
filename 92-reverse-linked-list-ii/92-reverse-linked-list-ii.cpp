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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL||head->next==NULL||left==right)return head;
        int count=1;
        ListNode* l= head;
        ListNode* prev= NULL;
        while(count!=left){
            count++;
            prev=l;
            l=l->next;
        }
        ListNode* p= l;
        l=l->next;
        p->next=NULL;
        while(count!=right){
            ListNode* future= l->next;
            l->next=p;
            p=l;
            l=future;
            count++;
        }
        if(prev==NULL){
            head=p;
        }
        else{
            prev->next=p;    
        }
        if(l!=NULL){
            while(p->next!=NULL){
            p=p->next;
            }
            p->next=l;    
        }
        
        return head;
    }
};