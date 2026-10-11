#include <stdio.h>

int main()
{
    int i, count = 0;

    for(i = 30; i <= 150; i++)
    {
        if(i % 2 != 0)
        {
            count++;
        }
    }

    printf("Odd numbers = %d", count);

    return 0;
}
