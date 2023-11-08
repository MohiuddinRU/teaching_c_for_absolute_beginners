#include <stdio.h>

int main() {

    int i;

    long long sum = 0;

    for (i = 0; i <= 100000; i++) {
        sum = sum + i;
    }

    printf("sum = %lld\n", sum);

    return 0;
}
