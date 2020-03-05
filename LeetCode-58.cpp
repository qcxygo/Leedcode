int lengthOfLastWord(char * s){
int a=0,m=0;
for(int i=0;i<strlen(s);i++){
    if(s[i]==' '&&a!=0)
    {
      m=a;
        a=0;
    }
    if(s[i]!=' ')
    a++;
}
if(a==0)
return m;
return a;
}
