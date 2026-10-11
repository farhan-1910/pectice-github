#include <stdio.h>

int main() {
    int i;

    for(i = 5; i <= 120; i++) {
        if(i % 3 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
