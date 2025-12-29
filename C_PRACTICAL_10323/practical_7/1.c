// Ashutosh kumar thakur 
// ERP-10323
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
// OUTPUT :

// Enter n: 3
//   *
//  ***
// *****
//  ***
//   *