/*
Q4. Check whether a given string is a palindrome.
Ignore spaces and differences between uppercase and lowercase letters.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    if(str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    int start = 0;
    int end = length - 1;
    int palindrome = 1;

    while(start < end)
    {
        if(str[start] == ' ')
        {
            start++;
            continue;
        }

        if(str[end] == ' ')
        {
            end--;
            continue;
        }

        if(tolower(str[start]) != tolower(str[end]))
        {
            palindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if(palindrome == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
