// Ashutosh kumar thakur
// ERP-10323
#include <stdio.h>

int main() {
    int n, sum = 0;
printf("Enter limit n: ");
scanf("%d", &n);

for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
        continue;   // skip odd numbers
        }
        sum += i;
    }
printf("Sum of even numbers = %d", sum);
return 0;
}

// OUTPUT:
// Enter limit n: 10
// Sum of even numbers = 30