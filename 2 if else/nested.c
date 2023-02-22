#include <stdio.h>

main()
{
    int a, b, c;
    printf("Enter 3 numbers");

    // we will fetch 3 numbers from user
    scanf("%d%d%d", &a, &b, &c);
    // now we will see which is the greater number

    // check if a is bigger then b
    if (a > b)
    {
        // now check if a is bigger then c
        if (a > c)
        {
            printf("A is the greater number");
        }
        // if c is bigger then a
        else
        {
            printf("C is the greater number");
        }
    }
    // if b is bigger then a
    else
    {
        // check if b is bigger then c
        if (b > c)
        {
            printf("B is the greater number");
        }
        // if c is bigger then b
        else
        {
            printf("C is the greater number");
        }
    }
}