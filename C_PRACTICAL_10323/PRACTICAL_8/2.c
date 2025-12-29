// Ashutosh kumar thakur
// ERP-10323


#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d", x, y);
    return 0;
}

// OUTPUT :
// Enter two numbers: 2
// 4
// After swapping: x = 4, y = 2