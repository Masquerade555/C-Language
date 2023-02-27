#include <stdio.h>
#include <string.h>

main()
{
    // first all variables
    char name[20];
    char password[20];
    char username[20];
    int amount;
    int slip;
    // default password and username
    char pass[20] = "admin";
    char user[20] = "admin";
    int value1, value2;
    int other;

    printf("Welcome to my Bank ATM\n");
    printf("Enter Your Name\n");
    scanf("%s", &name);

    printf("Welcome %s \n", name);
    printf("Enter Your Username \n");
    scanf("%s", &username);
    printf("Enter Your Password \n ");
    scanf("%s", &password);

    // now to put both username and password in 1 variable
    value1 = strcmp(password, username);
    value2 = strcmp(pass, user);

    // now for the conditions
    // checking username and password
    if (value1 == value2)
    {
        printf("Choose the amount u want to withdraw");
        printf("Press 1 for 5000 \nPress 2 for 10000 \nPress 3 for Other Amount \n");
        scanf("%d", &amount);

        if (amount == 1)
        {
            printf("Do u want a slip? \n");
            printf("Press 1 for Yes \nPress 2 for No \n");
            scanf("%d", &slip);
            if (slip == 1)
            {
                printf("%s You have withdaw 5000 dollars \n", name);
                printf("Thank You");
            }
            else if (slip == 2)
            {
                printf("Thank You");
            }
            else
            {
                printf("Wrong Choice");
            }
        }
        else if (amount == 2)
        {
            printf("Do u want a slip? \n");
            printf("Press 1 for Yes \nPress 2 for No \n");
            scanf("%d", &slip);
            if (slip == 1)
            {
                printf("%s You have withdaw 10000 dollars \n", name);
                printf("Thank You");
            }
            else if (slip == 2)
            {
                printf("Thank You");
            }
            else
            {
                printf("Wrong Choice");
            }
        }

        else if (amount == 3)
        {
            printf("Enter your amount");
            scanf("%d", &other);
            if (other <= 50000)
            {

                printf("Do u want a slip? \n");
                printf("Press 1 for Yes \nPress 2 for No \n");
                scanf("%d", &slip);
                
                if (slip == 1)
                {
                    printf("%s You have withdaw %d dollars \n", name, other);
                    printf("Thank You");
                }
                else if (slip == 2)
                {
                    printf("Thank You");
                }
                else
                {
                    printf("Wrong Choice");
                }
            }
            else
            {
                printf("You can`t withdraw more than 50000 dollars at a time");
            }
        }
        else
        {
            printf("Wrong Choice");
        }
    }
    else
    {
        printf("Wrong Username Or Password");
    }
}