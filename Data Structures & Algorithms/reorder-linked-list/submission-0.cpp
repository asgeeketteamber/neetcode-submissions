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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        //finding middle node
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }


        //reversing linked list from the middle node 
        
        ListNode* prev= NULL;

        while(slow!=NULL)
        {
            ListNode* forward= slow;
            forward=slow->next;
            slow->next=prev;
            prev=slow;
            slow=forward; 
        }

        ListNode*temp = head;
              

        while( prev->next!=NULL)
        {
            ListNode*forward1 = temp->next;
            ListNode*forward2 = prev->next;
           
            temp->next=prev;
            prev->next=forward1;
            temp=forward1;
            prev=forward2;
        }


        
    }
};

