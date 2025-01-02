#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char strin[100];
    int i;

    printf("Enter a string=");
    scanf("%s",&str);

    strcpy(strin,str);
    strrev(strin);
    i=strcmp(str,strin);

    if(i==0)
    {
        printf("The number or string is palindrome");
    }

    else
    {
        printf("The number or string is not palindrome");
    }

    return 0;
}