//Write a C program to print the smallest and largest word in a given string..//
#include<stdio.h>
int main()
{
    int n,i,j,s,m=0,t=0,k;
    printf("enter the number of characters\n");
    scanf("%d",&n);
    char ch[n+1];
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(i=0;i<n;i++)
    {   if(ch[i]=' ' || ch[i]='/0')
        s++;
        if(ch[i]=' ' || ch[i]='\0'){
        if(s>=m){
        m=s;
        t=i;
        }
        s=0;}}
      printf("maximum word:");
      for(i=t+1;i<(t+s);i++)
      printf("%c",ch[i]);
      int p,q,r,s;
      for(i=0;i<n;i++)
    {
        if(ch[i]!=' ' ||  ch[i]!='\0')
        p++;
        if(ch[i]=' ' || ch[i]='\0'){
        if(p<=n+i){
        q=p;
        r=i;
        }
        p=0;}}
        printf("min word");
        for(i=r+1;i<(r+q);r++)
        printf("%c",ch[i]);

        return 0;
}
