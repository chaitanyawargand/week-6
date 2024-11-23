//Write a C program to print the string after deleting the vowels in the string.//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    char s[n+1];
        for(i=0;i<n;i++)
        {
          if(!(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'))
          {
            s[j]=ch[i];
            j++;
          } 
        }
    printf("the new string:%s",s);
    return 0;
}
    





