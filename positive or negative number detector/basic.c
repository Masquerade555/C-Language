#include <stdio.h>

main()
{
    int value1;

    printf("Enter your number");
    scanf("%d", &value1);

    if (value1 > 0)
    {
        printf("%d is the positive number\n", value1);
    }
    else if (value1 < 0)
    {
        printf("%d is the negative number \n", value1);
    }
    else
    {
        printf("%d is Zero\n", value1);
    }

    if (value1%2 == 0)
    {
        printf("This is an Even Number");
    }
    else
    {
        printf("This is an Odd Number");
    }
    
    
    
}