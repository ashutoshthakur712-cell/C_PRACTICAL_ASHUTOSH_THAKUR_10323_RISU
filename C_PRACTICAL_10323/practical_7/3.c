// Ashutosh kumar thakur
// ERP-10323

#include <stdio.h>

int main() {
    int n = 4;   // number of rows

    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}

// OUTPUT:
// A
// AB
// ABC
// ABCD