/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
struct ListNode* q,*p;


if(l1==NULL)
return l2;
if(l2==NULL)
return l1;
q=(struct ListNode*)malloc(sizeof(struct ListNode));
p=q;

while(l1!=NULL&&l2!=NULL){
    if(l1->val<l2->val)
{
    q->next=l1;
    l1=l1->next;
q=q->next;
}
else
{
    q->next=l2;
    l2=l2->next;
    q=q->next;
}
}
if(l1==NULL)
q->next=l2;
else
q->next=l1;
return p->next;
}
