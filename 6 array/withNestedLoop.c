#include <stdio.h>

main()

{
    //we are using 3 dimensional array
    int i,j, Numbers[2][3];

//getting values from user
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Array [%d] [%d]: ",i,j);
            scanf("%d",&Numbers[i][j]);
        }
        
    }

//printing those values
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Array [%d] [%d]: %d \n", i,j,Numbers[i][j]);
        }
        
    }
    
    
}