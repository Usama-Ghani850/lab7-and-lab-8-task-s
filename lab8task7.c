#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

   
    for (int num = start; num <= end; num++) {
        if (num < 2)
            continue; 

        int isPrime = 1; 

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", num);
    }

    return 0;
}
