
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find string length
    while (str[len] != '\0')
    {
        len++;
    }

    // Reverse the string
    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
