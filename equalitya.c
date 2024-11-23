#include<stdio.h>
int main()
{
   int n,k,i;
    printf("enter the number of elements in s1\n");
	 scanf("%d",&n);
	  printf("enter the number of elements in s2\n");
	 scanf("%d",&k);
	 char s1[n];
	 char s2[k];
	 
	 for(i=0;i<n;i++)
	 {
	 	scanf("%c",&s1[i]);
	 }
	 for(i=0;i<k;i++)
	 {
	 	scanf("%c",&s2[i]);
	 }
	 if(n==k)
	 {
	 	for(i=0;i<n;i++)
	 	{
	 		if(s1[i]==s2[i])
	 	printf("they are equal\n");
	 }
		 else 
		printf("they are not equal\n");
	 }
	 else 
	 printf("they are not equal\n");
	 
	 return 0;
	 
}
