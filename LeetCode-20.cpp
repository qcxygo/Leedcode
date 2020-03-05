bool isValid(char * s){
int a,c=0;
a=strlen(s);
char b[100005];
for(int i=0;i<a;i++)
{
    if(s[i]=='('||s[i]=='{'||s[i]=='[')
    {
        b[c]=s[i];
        c++;
    }
    if(s[i]==')'){
        if(i==0||c==0||b[c-1]!='(')
        {
            return false;
        }
        else c--;
    }
    if(s[i]==']'){
        if(i==0||c==0||b[c-1]!='[')
        {
            return false;
        }
        else c--;
    }
    if(s[i]=='}'){
        if(i==0||c==0||b[c-1]!='{')
        {
            return false;
        }
        else c--;
    }
}
if(c==0)
return true;
return false;
}
