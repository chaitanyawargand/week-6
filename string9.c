//Write a C program to print the vowels in the given string//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    char a,e,i,o,u;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(k=0;k<n;k++)
    {
        if(ch[k]=='a'||ch[k]=='e'||ch[k]=='i'||ch[k]=='o'||ch[k]=='u')
        printf("%c",ch[k]);
    }
}
    