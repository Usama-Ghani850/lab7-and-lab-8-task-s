#include <stdio.h>

int main() {
    int limit;

    printf("Enter the number up to which you want tables: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++) {      
        printf("\nTable of %d\n", i);

        for (int j = 1; j <= 10; j++) {     
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
