/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
   if(head==NULL)
   return true;
    int a[100000],b=0;
while(head!=NULL)
{a[b]=head->val;
    b++;
    head=head->next;
}
if(b==1)
return true;
for(int i=0;i<=b/2;i++)
{
    if(a[i]!=a[b-1-i])
    return false;
}
return true;
}
