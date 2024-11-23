#include<stdio.h>
int main()
{
	int n,i;
	char t;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	char ch[n];
   for(i=0;i<n;i++)
   	scanf("%c",&ch[i]);
	for(i=0;i<n/2;i++)
	{
		t=ch[i];
		ch[i]=ch[n-i-1];
		ch[n-i-1]=t;
	}
	for(i=0;i<n;i++)
	{
	printf("%c",ch[i]);
	}
	return 0;
}
