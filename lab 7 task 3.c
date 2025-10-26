// #include <stdio.h>

int main() {
    int a[5] = {2, 3, 1, 2, 3};
    int n = 5;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

        
        if (count > 1) {
            int alreadyPrinted = 0;
            for (int k = 0; k < i; k++) {
                if (a[k] == a[i]) {
                    alreadyPrinted = 1;
                    break;
                }
            }
            if (!alreadyPrinted) {
                printf("The number %d is repeated more than once.\n", a[i]);
            }
        }
    }

    return 0;
}

