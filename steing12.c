#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    int l=strlen(ch);
    int a[26]={0};
    for(int i=0;i<l;i++)
    a[ch[i]-'a']++;
    int max=0;
    int min=20;
    int s;
    int p;
    for(int i=0;i<26;i++)
    {
        if(a[i]>max)
        {a[i]=max;
        s=i;}
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]<min)
        {min=a[i];
        p=i;}
    }
    
    printf("most repeted character:%c",s+97);
    printf("least repeated char:%c",p+97);
    return 0;
}
