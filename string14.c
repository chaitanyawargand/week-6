//14. Write a C program to cound the number of vowels, consonants, digits and white spaces in a string//
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,num=0,vo=0,co=0,space=0;
    printf("enter the number of elements\n");
    scan("%d",&n);
    char ch[n+1];
    int vo[10]={65,69,73,79,85,97,101,105,111,117};

    fflush(stdin);
    printf("enter the string\n");
    scanf("%[^\n]s",ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]>0 && ch[i]<9)
        num++;
        for(j=0;j<10;j++)
        {
            if(ch[i]==vo[j])
        }
        
    }
}*/
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, whitespace = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

  
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

  
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            consonants++;
        }
 
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
 
        else if (ch == ' ' || ch == '\t' || ch == '\n') {
            whitespace++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White spaces: %d\n", whitespace);

    return 0;
}