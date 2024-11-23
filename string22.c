//Write a C program to print the first capital letter in a given string.//
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
    for(i=0;i<n;i++){
    if(ch[i]>=65 && ch[i]<=90){
    printf("%c",ch[i]);
    break;}}
    return 0;
    }