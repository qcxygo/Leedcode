bool yuan(char a){
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    return true;
    else return false;
}
char * reverseVowels(char * s){
    if(strlen(s)==0)
    return s;
char a;
int i=0, j=strlen(s)-1;
while(i<j){
    if(yuan(s[i])&&yuan(s[j])){
        a=s[i];
        s[i]=s[j];
        s[j]=a;
        i++;
        j--;
    }
if(yuan(s[i])==0)
i++;
if(yuan(s[j])==0)
j--;
}
return s;
}
