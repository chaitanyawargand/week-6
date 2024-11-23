//Write a C program to print the frequency of each character in a given string//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    int a[256]={0};
    for(i=0;ch[i]!='\0';i++){
        a[ch[i]]++;}
    for(i=0;i<256;i++){
    if(a[i]!=0 && i!=' ')
    printf("frequency of character '%c' is %d\n",i,a[i]);}
    return 0;

}