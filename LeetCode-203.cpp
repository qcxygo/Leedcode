/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
if(head==NULL)
return head;
while(head->val==val)
{head=head->next;
if(head==NULL)
return head;
}
struct ListNode* a=head;
while(a->next!=NULL)
{
    if(a->next->val==val)
    a->next=a->next->next;
   else
   a=a->next;
}
return head;
}
