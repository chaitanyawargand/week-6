//Write a C program to capitalize first letters of each word in a given string//
#include<stdio.h>
int main()
{
     int n,i;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]==' ')
        ch[i+1]=ch[i+1] -32;
     }
     ch[0]-=32;
     printf("new string:%s",ch);
     return 0;
}