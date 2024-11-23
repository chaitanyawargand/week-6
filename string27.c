//Write a C program to check if a given string is pangram or not.//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,s=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    int a[26]={0};
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(i=0;ch[i]!='\0';i++){
        a[ch[i]-97]++;}
   for(i=0;i<26;i++){
   if(a[i]==0)
   {printf("string is not pangram\n");
   break;}
   else 
   s++;
   }
   if(s==26)
   printf("the string is pangram\n");

   return 0;
}
