/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
if(head==NULL)
return head;
int a[100000];
struct ListNode* b;
b=head;
int i=0;
while(b!=NULL)
{
    a[i]=b->val;
    i++;
b=b->next;
}
b=head;
int j=0;
while(b!=NULL)
{
    b->val=a[i-j-1];
    j++;
    b=b->next;
}
return head;
}
