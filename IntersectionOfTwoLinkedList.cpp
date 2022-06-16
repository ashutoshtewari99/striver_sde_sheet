// 1st Approach: Brute Force

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2)
    {

        // Brute Force
        while (headA != NULL)
        {
            ListNode *temp = headB;
            while (temp != NULL)
            {
                if (headA == temp)
                {
                    return temp;
                }
                emp = temp->next;
            }
            headA = headA->next;
        }
        return NULL;
    }
};

// 2nd Approach: Optimised

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2)
    {

        // Optimised
        ListNode *d1 = head1;
        ListNode *d2 = head2;

        while (d1 != d2)
        {
            d1 = d1 == NULL ? head2 : d1->next; // if d1 is NULL assign head2 to d1 else move d1 to d1->next
            d2 = d2 == NULL ? head1 : d2->next;
        }

        return d1;
    }
};