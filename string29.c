/*Write a C program to check whether two Strings are anagram of each other
An anagram of a string is another string that contains the same characters, only the order of characters can
be different. For example, “abcd” and “dabc” are an anagram of each other.*/
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
    char ch2[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch2);
    int s1[26]={0};
    int s2[26]={0};
    for(i=0;ch[i]!='\0';i++)
    s1[ch[i]-97]++;
     for(i=0;ch2[i]!='\0';i++)
    s2[ch2[i]-97]++;
    for(i=0;i<n;i++){
    if(s1[i]==s2[i])
    k++;}
    if(k=26)
    printf("two Strings are anagram of each other\n");
    else
    printf("two Strings are not anagram of each other");
  return 0;
}