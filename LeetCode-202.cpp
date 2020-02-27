bool isHappy(int n){
int a[100000];

int b=0;
int s=0;
a[0]=n;
while(1==1)
{s=0;
    while(n!=0)
{
    s=s+(n%10)*(n%10);
    n=n/10;
}
b++;
n=s;
if(s==1)
return true;
for(int i=0;i<b;i++)
{
    if(a[i]==s)
    return false;
}
a[b]=s;
}
}
