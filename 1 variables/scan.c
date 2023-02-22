#include <stdio.h>

main()
{
    //we wil take input from user in this file

// to get a string value or making of a string variable
    char name[20];

// to make a variable of integer
    int age;
    //to make a variable of float values like percentages
    float percent;

    printf("Welcome \n Enter your Details");

    printf("\n Enter your Name");

    //now we will fetch value from user
    //we wrote name variable because we wanna save value in that variable
    //%s means its a string or char value
    scanf("%s",&name);

    printf("\n Enter your age");

    //%d means integer value will be inserted in that variable
    scanf("%d",&age);
    printf("\n Enter your percentage");

    //%f means float value will be inserted 
    scanf("%f",&percent);

    printf("\n Your name is %s", name);
    printf("\n Your name is %d", age);
    printf("\n Your name is %f", percent);
}