#include <stdio.h>

main()
{
    int i;

//in array specially in C we have to give limit of how much value it can store
    char name[100][1000] = {
        "john", "wick", "dan", "shun"
    };

    //now to print array
    //we have to use it with loop
    for  (i = 0; i < 3; i++)
    {
        printf("%s \n", name + i);
    }
    
}