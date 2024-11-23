#include<stdio.h>
int main()
{
   int i,n,k;
   printf("enter the element in s1\n");
   scanf("%d",&n);
   printf("enter the element in s2\n");
   scanf("%d",&k);
   char s1[n];
   char s2[k];
   
   scanf("%s",s1);
   scanf("%s",s2);
   if(n>k)
   {
    for(i=0;i<k;i++)
     s1[i]=s2[i];
    }
   for(i=0;s1[i]!='\0';i++)
   {
   	printf("%s",s1[i]);
   	
   }
   return 0;
}
