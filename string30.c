/*Given a string sentence which consists of both uppercase & lowercase alphabets and words are
separated by empty space characters. Write a program to return the length of the last word in the string. If
string is empty return “-1”*/
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
    if(ch[n]==' ')
    printf("-1");
    else {  
    for(i=n-1;i>0;i--){
        if(ch[i]!='\0'){
        if(ch[i]==' ')
        break;
        else
        k++;
    }}}
    printf("%d",k);
    return 0;}