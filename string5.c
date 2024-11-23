//Write a C program to reverse a string without using string functions.//
#include<stdio.h>
int main()
{
  int n,i;
   printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    char s[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(i=0;i<n;i++)
    s[i]=ch[n-i-1];

    s[n]='\0';
    

    printf("the revesed string:%s",s);
    return 0;
}