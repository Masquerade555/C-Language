#include <stdio.h>

main()
{
    // we will use pointers on a variable
    int a, b, c;
    a = 5;
    b = 10;
    c = 20;

    // now to print simply
    printf("a: %d \n", a);

    // now to print using pointer
    // see the diiference between both of them when they are printed
    printf("address of a: %p \n", &a);

    // now to do the same with b and c

    printf("b: %d \n", b);

    printf("address of b: %p \n", &b);

    printf("c: %d \n", c);
    printf("address of c: %p \n", &c);
}