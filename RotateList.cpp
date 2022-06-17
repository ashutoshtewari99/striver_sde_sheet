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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        //edge cases
        if(!head || !head->next || k==0) return head;
        
        ListNode *curr=head;
        int len=1;
        
        //traverse the list using *curr pointer while counting the number of elements
        while(curr->next && ++len)
            curr=curr->next;
        
        //at the end of the loop curr will point at last element
        //make it point to head to make a loop
        curr->next=head;
        
        //if k>>>l we just need to rotate list by k%len times
        k=k%len;
        k=len-k; // k is now the position of node whose link we need to break
        
        //moving to k-th node
        while(k--) curr=curr->next;
        
        //making curr->next as head
        head=curr->next;
        
        //breaking the link
        curr->next=NULL;
        
        return head;
    }
};