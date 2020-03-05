char findTheDifference(char * s, char * t){
int a[150],b[150];
char q;
for(int i=0;i<150;i++)
a[i]=b[i]=0;
for(int i=0;i<strlen(s);i++)
a[s[i]]++;
for(int i=0;i<strlen(t);i++)
b[t[i]]++;
for(int i=0;i<150;i++){
    if(a[i]!=b[i])
    {
        q=i;
        return q;
    }
}
return q;
}
