/*A Machine is given two names as inputs, the machine should suggest the possibility of forming the
second name from the first name .If the second name is possible it should indicate yes ,if not it should
indicate no .*/
#include<stdio.h>
int main()
{
  int n,n2,i,j,flag=0;
  char c;
   printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    printf("enter the number of elements\n");
    scanf("%d",&n2);
    char ch2[n2+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch2);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(ch2[i]==ch[j])
        flag++;
        }}
        if(flag==n2)
        printf("yes");
        else
        printf("no");
}