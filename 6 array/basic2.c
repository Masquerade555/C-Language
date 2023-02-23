#include <stdio.h>

main()
{
    // now to hold values in array with different method
    // this time we are making integer array
    int i, myArray[5];

    // array value always start with 0
    myArray[0] = 20;
    myArray[1] = 30;
    myArray[2] = 40;
    myArray[3] = 50;
    myArray[4] = 60;

    // loop again
    for (i = 0; i < 5; i++)
    {
        printf("%d \n", myArray[i]);
    }
}