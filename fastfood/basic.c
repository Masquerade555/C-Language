#include <stdio.h>

main()
{
    char name[20];
    int v1, v2, v3, v4;

    printf("What is your name? \n");
    scanf("%s", &name);

    printf("Select your fast food\n");
    printf("press 1 for zinger \npress 2 for roll \n");
    scanf("%d", &v1);

    if (v1 == 1)
    {
        printf("Select your size \n");
        printf("press 1 for jumbo \n press for regular \n");
        scanf("%d", &v2);

        if (v2 == 1)
        {
            printf("Do you want cold drink?\n");
            printf("press 1 for yes \npress 2 for no \n");
            scanf("%d", &v3);

            if (v3 == 2)
            {
                printf("Choose your payment method \n");
                printf("press 1 for cash \npress 2 for card\n");
                scanf("%d", &v4);

                printf("%s Your order is zinger jumbo without cold drink", name);
            }
            else if (v3 == 1)
            {
                printf("Choose your payment method \n");
                printf("press 1 for cash \npress 2 for card\n");
                scanf("%d", &v4);

                printf("%s Your order is zinger jumbo with cold drink", name);
            }
            else
            {
                printf("wrong choice");
            }
        }
        else if (v2 == 2)
        {
            printf("Do you want cold drink?\n");
            printf("press 1 for yes \npress 2 for no\n");
            scanf("%d", &v3);

            if (v3 == 2)
            {
                printf("Choose your payment method \n");
                printf("press 1 for cash \npress 2 for card\n");
                scanf("%d", &v4);

                printf("%s Your order is zinger regular without cold drink", name);
            }
            else if (v3 == 1)
            {
                printf("Choose your payment method \n");
                printf("press 1 for cash \npress 2 for card\n");
                scanf("%d", &v4);

                printf("%s Your order is zinger regular with cold drink", name);
            }
            else
            {
                printf("wrong choice");
            }
        }
        else
        {
            printf("wrong choice");
        }
    }

    else if (v1 == 2)
    {
        printf("Select your size \n");
        printf("press 1 for jumbo \n press for regular \n");
        scanf("%d", &v2);

        if (v2 == 1)
        {
            printf("Do you want cold drink?\n");
            printf("press 1 for yes \npress 2 for no\n");
            scanf("%d", &v3);

            if (v3 == 2)
            {
                printf("Choose your payment method \n");
                printf("press 1 for cash \npress 2 for card\n");
                scanf("%d", &v4);

                printf("%s Your order is roll jumbo without cold drink", name);
            }
            else if (v3 == 1)
            {
                printf("Choose your payment method \n");
                printf("press 1 for cash \npress 2 for card\n");
                scanf("%d", &v4);

                printf("%s Your order is roll jumbo with cold drink", name);
            }
            else
            {
                printf("wrong choice");
            }
        }
        else if (v2 == 2)
        {
            printf("Do you want cold drink?\n");
            printf("press 1 for yes \npress 2 for no\n");
            scanf("%d", &v3);

            if (v3 == 2)
            {
                printf("Choose your payment method \n");
                printf("press 1 for cash \npress 2 for card\n");
                scanf("%d", &v4);

                printf("%s Your order is roll regular without cold drink", name);
            }
            else if (v3 == 1)
            {
                printf("Choose your payment method \n");
                printf("press 1 for cash \npress 2 for card\n");
                scanf("%d", &v4);

                printf("%s Your order is roll regular with cold drink", name);
            }
            else
            {
                printf("wrong choice");
            }
        }
        else
        {
            printf("wrong choice");
        }
    }
    else
    {
        printf("wrong choice");
    }
}