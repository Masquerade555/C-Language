#include <stdio.h>

main()
{
    // time to make switch case

    int q1;
    // we wanna make a variable 1st to insert in switch

    // the correct answer is 3 football
    printf("Which Sports is watched by most people in the world? \n 1.Baseball \n 2.Volleyball \n 3.Football \n");

    scanf("%d", &q1);
    switch (q1)
    {
        // case code will show what to do if condition is true
        // if user type 1 then this case will start
        // if user type 1 means baseball
    case 1:
        printf("Wrong Answer");
        break;

    // if user type 2 means volleyball
    case 2:
        printf("Wrong Answer");
        break;

        // case 3 which will be the correct answer
    case 3:
        printf("Correct Answer");
        break;

        // default is worked when every other condition is false
    default:
        printf("You didn`t choose the options from above");
        break;
    }
}