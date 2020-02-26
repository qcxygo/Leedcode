/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
struct ListNode* l=head;
int c=0;
while(l!=NULL)
{
    l=l->next;
    c++;
}
if(n==c)
{
    head=head->next;
return head;    
}
else
{ l=head;
    for(int i=0;i<c-n-1;i++)
l=l->next;
l->next=l->next->next;
return head;
}
}
