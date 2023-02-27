#include <stdio.h>

main()
{
    int v1,v2,userinput;

    printf("Whats your age?");
    scanf("%d",&v2);

    if (v2 > 18)
    {
        printf("whats your blood type?");
        printf("\n Press 1 for B+ \n Press 2 for B- \n Press 3 for O+ \n Press 4 for O- \n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("You can donate to B+ and B-");
        }
        else if (userinput == 2)
        {
            printf("You can donate to B+ and B-");
        }
        else if (userinput == 3)
        {
            printf("You can donate to O+ and O-");
        }
        else if (userinput == 4)
        {
            printf("You can donate to B+ and B-");
        }
        else
        {
            printf("wrong blood type");
        }
        

    }
    else
    {
        printf("Your are underage");
    }
    
}