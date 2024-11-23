//Write a C program to print the first occurrence of the character in the given string without usingstrchr
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    char k;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the character\n");
    scanf(" %c",&k);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(i=0;ch[i]!='\0';i++)
    {  
      if(ch[i]==k){
        printf("%d",i+1);
        break;
        }
    }
    return 0;
}