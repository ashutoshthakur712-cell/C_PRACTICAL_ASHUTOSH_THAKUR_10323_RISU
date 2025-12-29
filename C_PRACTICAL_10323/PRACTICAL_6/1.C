// Ashutosh kumar thakur
// ERP-10323
#include<stdio.h>

int main(){

    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
printf("Enter value of b: ");
    scanf("%d", &b);
for (int i = a; i <= b; i++){
        printf("%d ", i);
    }
    return 0;
}
// OUTPUT :
// Enter value of a: 5
// Enter value of b: 6
// 5 6