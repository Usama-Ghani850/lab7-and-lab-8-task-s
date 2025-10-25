#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");

    scanf("%[^0-9]", str);

    printf("String without digits: %s\n", str);

    return 0;
} 