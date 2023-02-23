#include <stdio.h>

main()
{
    int i, j, a;

    int array[a];

    printf("Enter Array row \n");
    scanf("%d", &a);

    for ( i = 0; i <=a-1; i++)
    {
        printf("Enter your value # %d \n",i);
        scanf("%d",&array[i]);
    }

    for ( j = a-1; j >=0; j--)
    {
        printf("Your values are: %d \n", array[j]);
    }
    
}