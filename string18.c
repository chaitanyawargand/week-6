#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    char t;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++){
        if(ch[j]>ch[j+1]){
            t=ch[j];
            ch[j]=ch[j+1];
            ch[j+1]=t;
        }}}
        printf("new string:%s",ch);
          return 0;

}