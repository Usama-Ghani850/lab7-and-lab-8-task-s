#include <stdio.h>

int main() {
    int b[5] = {2,2,2,2,2};

    for (int i = 0; i < 5; i++) {
        int count = 0;

        for (int j = 0; j < 5; j++) {
            if (b[i] == b[j]) {
                count++;
            }
        }

        if (count > 1) {
            int alreadyPrinted = 0;

            for (int k = 0; k < i; k++) {
                if (b[k] == b[i]) {
                    alreadyPrinted = 1;
                    break;
                }
            }

            if (!alreadyPrinted) {
                printf("%d occurred more than once\n", b[i]);
            }
        }
    }

    return 0;
}
