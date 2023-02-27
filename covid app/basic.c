#include <stdio.h>

main()
{
    char name[20];
    int age, v1, v2, v3;

    printf("Enter your Name ");
    scanf("%s", &name);

    printf("Enter your age ");
    scanf("%d", &age);

    if (age > 12)
    {
        printf("What are your symptoms\n");
        printf("Press 1 for fever \nPress 2 for tiredness/weakness\n");
        scanf("%d", &v1);

        if (v1 == 1)
        {
            printf("Kindly Answer another symptom");
            printf("\nPress 1 for difficulty in breathing \nPress 2 for vomitting\n");
            scanf("%d", &v2);

            if (v2 == 1)
            {
                printf("You have covid");
            }
            else if (v2 == 2)
            {
                printf("Kindly Answer another symptom");
                printf("\nPress 1 for stomach pain or diarreha \nPress 2 for lethergy or restlessness \n");
                scanf("%d", &v3);

                if (v3 == 1)
                {
                    printf("You have Typhoid");
                }
                else if (v3 == 2)
                {
                    printf("You have Dengue");
                }
                else
                {
                    printf("Wrong choice");
                }
            }
            else
            {
                printf("Wrong choice");
            }
        }
        else if (v1 == 2)
        {
            printf("Kindly Answer another symptom");
            printf("\nPress 1 for stomach pain or diarreha \nPress 2 for lethergy or restlessness \n");
            scanf("%d", &v3);

            if (v3 == 1)
            {
                printf("You have Typhoid");
            }
            else if (v3 == 2)
            {
                printf("You have Dengue");
            }
            else
            {
                printf("Wrong choice");
            }
        }
        else
        {
            printf("Wrong choice");
        }
    }
    else
    {
        printf("You are a child you cant get covid");
    }
}