#include<stdio.h>
int main()

{
    char ch;
    printf("Enter any character :");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u')
    {
        printf("%c : is vowel\n",ch);
    }
    else
    {
        printf("%c : is consonant\n",ch);
    }

}

