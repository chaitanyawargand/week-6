#include<stdio.h>
int main()
{
	char ch[25];
	int c=0,i;
	scanf("%s",ch);
  
 for(i=0;ch[i]!='\0';i++)
 {
 	c++;
 }
 printf("%d",c);
 
  return 0;
}
