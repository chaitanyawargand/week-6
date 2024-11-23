/*Sachin is a small boy who is fond of playing with strings. He also loves people who can show him some
cool operations on strings. Sachin is very bored so he asks you to reverse a string that he likes. But as
Sachin is a small boy so he sometimes gives you invalid string. A string is invalid if it contains numbers also.
If string is invalid just print “invalid string” as output. Else print the reverse of that string*/
#include<stdio.h>
int main()
{
  int n,i,flag=0,t=0;
   printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    char s[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    
    for(i=0;i<n;i++)
    if(flag==1)
    break;
    if(!(ch[i]>=97 && ch[i]<=122)){
    printf("the string is invalid\n");
    flag=1;
    }
    else
    {
    s[i]=ch[n-i-1];
    s[n]='\0';
    t=1;
    }
    if(t==1)
    printf("the revesed string:%s",s);
    return 0;
}