#include <stdio.h>

main()
{
    // we will match 3 values to see which is greater
    int value1, value2, value3;

    printf("Enter 1st value ");
    scanf("%d", &value1);

    printf("Enter 2nd value ");
    scanf("%d", &value2);

    printf("Enter 3rd value ");
    scanf("%d", &value3);

    // now we will use condition
    if (value1 > value2)
    {
        if (value1 > value3)
        {
            printf("%d is the greater number", value1);
        }
        else
        {
            printf("%d is the greater number", value3);
        }
    }

    else if (value2 > value3)
    {

        printf("%d is the greater number", value2);
    }
    else
    {
        printf("%d is the greater number", value3);
    }
}