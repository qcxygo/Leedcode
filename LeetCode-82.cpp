/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
struct ListNode *p,*q,*r;
if(head==NULL||head->next==NULL)return head;
p=head;
q=(struct ListNode*)malloc(sizeof(struct ListNode));
q->next=head;
r=q;
while(p->next!=NULL){
    if(p->val!=p->next->val)
    {
        p=p->next;
        q=q->next;
    }
    else{
        while(p->next!=NULL&&p->next->val==p->val)
        {
            p->next=p->next->next;
        }
        q->next=p->next;
        p=q->next;
    }
    if(p==NULL)
    return r->next;
}
return r->next;

}
