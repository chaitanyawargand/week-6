/*Develop your own functions for performing following operations on strings:
(a) Copying one string to another
(b) Comparing two strings
(c) Adding a string to the end of another string
Write a driver program to test your functions.*/
#include<stdio.h>
void string(char*,int);
int main()
{
  int n;
  printf("enter the number of elements\n");
  scanf("%d",&n);
  char s[n+1];
  scanf("%[^\n]s",s);
  int *ptr=s;
  string(ptr,n);
  return 0;
}
void string(char *p,int n)
{
  int i;
  char s2[n];
  for(i=0;i<n;i++)
  s2[i]=*p+i;
  printf("%s",s2);
}