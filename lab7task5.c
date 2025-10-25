#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");

    scanf("%[^\n]", str);

    for (int i = 0; i < 100; i++)
    {
        if (str[i] == ' ') count++;
    }

    printf("Number of Whitespace Characters in String are: %d\n", count);

    return 0;
}