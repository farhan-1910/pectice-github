
#include <stdio.h>

int main() {
    int i, sum = 0;

    for(i = 10; i <= 500; i++) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
