#include <stdio.h>

int main()
{
    int i = 49;

    while(i <= 345)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}
