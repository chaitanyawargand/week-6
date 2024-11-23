#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the number of elements\n");
    scan("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(i=0;i<n;i++)
    ch[i]+=32;
    printf("the string:%s",ch);
    return 0;
}