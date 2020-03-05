bool isIsomorphic(char * s, char * t){
int a[1000],b[1000];
for(int i=0;i<1000;i++)
a[i]=b[i]=0;
for(int i=0;i<strlen(s);i++){
    if(a[s[i]]==0&&b[t[i]]==0){
        a[s[i]]=t[i];
        b[t[i]]=s[i];
    }
    else{
        if(a[s[i]]!=t[i]||b[t[i]]!=s[i])
        return false;
    }
}
return true;
}
