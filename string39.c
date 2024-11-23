/*In the Byteland country a string "S" is said to super ascii string if and only if count of each character in
the string is equal to its ascii value.
In the Byteland country ascii code of 'a' is 1, 'b' is 2 ...'z' is 26.
Your task is to find out whether the given string is a super ascii string or not.*/
#include<stdio.h>
int main()
{
  int n,i,k=0,s=0;
   printf("enter the number of elements\n");
    scanf("%d",&n);
    char ch[n+1];
    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    int flag[26]={0};
    for(i=0;ch[i]!='\0';i++)
      flag[ch[i]-'a']++;
    for(i=0;i<n;i++){
    if(flag[i]!=0)
    k++;
    printf("k vaule %d\n",k);}
    for(i=0;i<26;i++){
    if(flag[i]==(i+1))
     s++;
     printf("s value %d\n",s);}
     if(s==k)
     printf("yes");
     else
     printf("no");
}