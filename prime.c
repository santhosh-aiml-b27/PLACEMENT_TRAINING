#include <stdio.h>

int main() {
    int a;

    printf("Enter the number : ");
    scanf("%d", &a);

    if (a <= 1) {
        printf("a is not a prime number");
    }
    else {
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                printf("a is not a prime number");
                break;
            }
        }

        printf("a is prime number");
    }

    return 0;
}
