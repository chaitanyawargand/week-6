/*A programmer is given with a string and he is asked to check the ,Availability of smallest chunk of the
character in the string .If the smallest chunk of character is available ,the programmer will return the index
of the chunk , in other cases he will return the unavailable index . If the smallest chunk is found, print its
index. Else print ‘Character not found’*/
#include<stdio.h>
int main()
{
  int n,i,flag=0;
  char c;
   printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    printf("enter the character\n");
    scanf(" %c",&c);
    for(i=0;i<n;i++){
    if(ch[i]==c){
    printf("%d\n",i+1);
    flag=1;
    break;
    }}
    if(flag==0)
    printf("charcter is not found\n");
}