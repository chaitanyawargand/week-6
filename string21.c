//Write a C program to sort the words in a given string//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,d,k=0;
    char t;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    pritf("enter the string\n");
    scanf("%[^\n]s",ch);
   for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
    {
        for(d=1;d<=j;d++){
        printf("%c",ch[d]);
   }}
   1111

        return 0;

}