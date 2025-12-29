// Ashutosh kumar thakur
// ERP-10323
#include <stdio.h>
int main() {
    int correctPin = 1234;
    int pin, attempts = 3;
while (attempts > 0) {
        printf("Enter ATM PIN: ");
        scanf("%d", &pin);
if (pin == correctPin) {
            printf("Access Granted\n");
            break;
        } else {
            attempts--;
            printf("Wrong PIN! Attempts left: %d\n", attempts);
        }
    }
if (attempts == 0) {
        printf("Card Blocked\n");
    }
return 0;
}

// OUTPUT :
// Enter ATM PIN: 30
// Wrong PIN! Attempts left: 2
// Enter ATM PIN: 2
// Wrong PIN! Attempts left: 1
// Enter ATM PIN: 3
// Wrong PIN! Attempts left: 0
// Card Blocked