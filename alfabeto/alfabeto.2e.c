#include <stdio.h>

void main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int r = i * j;
            printf("%d x %d = %d\n", i, j, r);
        }
    }
}