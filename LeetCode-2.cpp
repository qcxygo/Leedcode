/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
struct ListNode *l3,*l4,*l5,*l6;
l4=(struct ListNode*)malloc(sizeof(struct ListNode));
l4->val=1;
l6=l1;
l3=l1;
l5=l1;
while(l1!=NULL&&l2!=NULL){
    l1->val+=l2->val;
    l1=l1->next;
    l2=l2->next;
}
if(l1==NULL)
{
while(l6->next!=NULL)
l6=l6->next;
l6->next=l2;
}
while(l3->next!=NULL){
    l3->next->val+=l3->val/10;
    l3->val=l3->val%10;
    l3=l3->next;
}
if(l3->val>=10)
{
      l3->val=l3->val%10;
      l3->next=l4;
      l4->next=NULL;
}
return l5;
}
