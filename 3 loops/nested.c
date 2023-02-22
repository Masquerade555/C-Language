#include <stdio.h>

main()
{
    int x, y;

    // parent loop
    for (x = 1; x < 10; x++)
    {
        printf("This is Parent loop line %d \n", x);

        // child or nested loop inside another loop
        for (y = 1; y < 5; y++)
        {
            printf("This is Child loop line %d \n", y);
        }

        printf("\n");
    }
}