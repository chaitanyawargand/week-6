#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,flag=0,repeat;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    int t;
    printf("enter the number of elements\n");
    scanf("%d",&t);
    char s[t+1];
    fflush(stdin);
    printf("enter the word\n");
    scanf("%[^\n]s",s);
    for(i=0;i<n;i++){
     if(ch[i]=' ')
     {
      for(j=0;j<t;j++){
      if(ch[i+j+1]==s[j])
      flag++;
      }
      }
    }
      for(i=0;i<3;i++){
      ch[i]=s[i];
      flag++;}
      repeat =(flag/3) -1;
    printf("the word repeated in string is %d",repeat);
    return 0;
}
