//Write a C program to print the first non repeated character from the string.//
#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
   for(i=0;i<n;i++)
      {
        if(flag==1)
        break;
        for(j=i+1;j<n;j++)
        {
        if(ch[i]==ch[j])
            break;
         else
          { 
            printf("%c",ch[i]);
            flag++;
           break;
           }
        }
      }
      return 0;


}
