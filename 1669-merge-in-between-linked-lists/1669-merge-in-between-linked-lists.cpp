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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr = list1;
        int trace=0;
        while(curr){
            if(trace+1 == a){
                ListNode* curr_list1 = curr->next;
                curr->next = list2;
                while(list2&&list2->next)
                    list2=list2->next;
                while(trace != b){
                    curr_list1 = curr_list1->next;
                    ++trace;
                }
                list2->next = curr_list1;
                break;
            }
            ++trace;
            curr=curr->next;
        }
        return list1;
    }
};