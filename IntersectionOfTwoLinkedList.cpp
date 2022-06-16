
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) 
    {
        
        //Brute Force
                // while(headA!=NULL)
                // {
                //     ListNode *temp=headB;
                //     while(temp!=NULL)
                //     {
                //         if(headA==temp)
                //         {
                //             return temp;
                //         }
                //         temp=temp->next;
                //     }
                //     headA=headA->next;
                // }
                // return NULL;
        

        
        //Optimised
        ListNode* d1 = head1;
        ListNode* d2 = head2;

        while(d1 != d2) 
        {
            d1 = d1 == NULL? head2:d1->next;
            d2 = d2 == NULL? head1:d2->next;
        }

        return d1;

        }
};