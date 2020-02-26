/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
struct ListNode* l=head;
if(l==NULL)
return head;
while(l->next!=NULL)
{
   if(l->val==l->next->val)
    l->next=l->next->next;
    else
    l=l->next;
    if(l==NULL)
    break;
}
return head;
}
