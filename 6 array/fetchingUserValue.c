#include <stdio.h>

main()
{
    //now to fetch array values from user
    int i, myArray[5];

//for fetching we also use loop
    for ( i = 0; i < 6; i++)
    {
        scanf("%d \n", &myArray[i]);
    }

    for ( i = 0; i < 6; i++)
    {
        printf("%d \n", myArray[i]);
    }
    
    
}