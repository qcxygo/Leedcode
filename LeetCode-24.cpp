/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
struct ListNode* a=head,*b,*c;
int d=0;
while(a!=NULL)
{
    a=a->next;
    d++;
}
if(d<=1)
return head;
else{
b=head;
head=head->next;
b->next=head->next;
head->next=b;
a=head;
a=a->next;
if(d%2==0)
{
    while(a->next!=NULL)
    {
        c=a->next;
        b=a->next->next;
        c->next=b->next;
        a->next=b;
        b->next=c;
        a=a->next->next;
    }
    return head;
}
if(d%2==1)
{
    while(a->next->next!=NULL)
    {
        c=a->next;
        b=a->next->next;
        c->next=b->next;
        a->next=b;
        b->next=c;
        a=a->next->next;
    }
    return head;
}
}
return head;
}
