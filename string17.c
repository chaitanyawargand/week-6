//Write a C program to cound number of words in a string.//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,k=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(i=0;i<n;i++){
    if(ch[i]==' ')
    k++;}
    printf("n0.of words in string:%d",k);
  return 0;
}