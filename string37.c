/*Vishwak the mathematics teacher asked to solve a book of expressions consisting of characters,
operators, and brackets. But Vishwak wants to give simplified expressions by removing brackets from the
expressions. Write a program to help Vishwak simplify an expression by removing brackets
Input:*/
#include<stdio.h>
int main()
{
  int n,i,k=0;
   printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    char s[n+1];
    for(i=0;i<n;i++)
    {  if(ch[i]!='(' && ch[i]!=')')
         s[k++]=ch[i];
    }
    printf("new string:%s",s);
    return 0;
}