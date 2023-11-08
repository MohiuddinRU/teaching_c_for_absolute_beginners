/* checking if a number is odd or even */
#include <stdio.h>

int main() {
    int x;

    printf("Enter x = ");
    scanf("%d", &x);

    if (x % 2 == 1) {
        printf("%d is odd.\n", x);
    } else {
        printf("%d is even.", x);
    }
}
