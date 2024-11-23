//Write a C program to remove white spaces from a given string//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(i=0;i<n;i++){
    if(ch[i]==' '){
    for(j=i;j<n;j++)
   ch[j]=ch[j+1];}}
   printf("new string:%s",ch);
   return 0;
}