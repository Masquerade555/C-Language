#include <stdio.h>

main()
{
    int v1,v2,result;

    printf("enter your 1st value: \n");

    scanf("%d", &v1);

    printf("\nenter your 2nd value: \n");

    scanf("%d", &v2);

    for ( result = 1; result <= v2; result++)
    {
        int answer = v1*result;
        
        printf("%d x %d = %d \n", v1,result,answer );
    }
    
}