#include <stdio.h>

main()
{
    int n1 = 10;
    int n2 = 10;

    // now to do if else
    // if number1 is greater then number2 the this condition is true

    if (n1 > n2)
    {
        // if the above condition is tru then this line will print
        printf("n1 is greater then n2");
    }
//here we will make a condition that will work if both values are same
    else if(n1 == n2)
    {
        //this line will print if n1 and n2 are equal
        printf("both n1 and n2 values are equal");

    }

    // if the above condition is false then below else will work automatically

    else
    {
        // if n2 is greater then n1 then this line will print
        printf("n2 is greater the n1");
    }
}
