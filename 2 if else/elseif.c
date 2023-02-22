#include <stdio.h>

main()
{
    int n1;

    printf("Enter a number");

    scanf("%d",&n1);

//if the number is divided by both 3 and 4 then do this
    if (n1%3 == 0 && n1%4 == 0)
    {
        printf("This number can be divided by both 3 and 4");
    }

    //if it can only divide by 3
    else if (n1%3 == 0)
    {
        printf("This number can be divided by 3");
    }

    //if it can only divide by 4
    else if (n1%4 == 0)
    {
        printf("This number can be divided by 4");
    }

//if all above are false
    else
    {
        printf("Can not be divided by 3 or 4");
    }
    
    
    
}