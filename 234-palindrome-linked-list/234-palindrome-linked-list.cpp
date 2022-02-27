class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *put = head;
        int n = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            n++;
        }
        // cout<<n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {

            arr[i] = put->val;
            put = put->next;
            // cout<<arr[i]<<"\n";
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                return false;
            }
            else
            {
                continue;
            }
        }
        return true;
    }
};