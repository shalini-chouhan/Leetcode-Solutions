class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *p = l1, *q = l2;
        
        int a, b, sum = 0, carry = 0;
        
        vector <int> temp;
        
		//Loop will continue till the end of the larger list
        while (p || q)
        {
			//If both 'p' and 'q' are not null, store there value in 'a' and 'b', else store 0 in 'a' and 'b'
            (p) ? a = p -> val : a = 0;
            (q) ? b = q -> val : b = 0;
            
            sum = a + b + carry;
			
			//calculating carry
            if (sum > 9)
            {
                sum = sum - 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            temp.push_back(sum);
            if (p)
                p = p -> next;
            if (q)
                q = q -> next;
        }
        if (carry == 1)
            temp.push_back(carry);
        
		//Inserting the result stored in vector 'temp' to a linked list
        p = q = NULL;
        for (int i = 0; i < temp.size(); i++)
        {
            ListNode *new_node = new ListNode();
            new_node -> val = temp[i];
            new_node -> next = NULL;
            if (p == NULL)
                p = q = new_node;
            else
            {
                q -> next = new_node;
                q = new_node;
            }
        }
        
        return p;
    }
};