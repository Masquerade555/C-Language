// now we will add nested switch in the same switch as before
#include <stdio.h>

main()
{
    // time to make switch case

    int q1, q2;
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

        // the right answer is 2 ronaldo
        printf("\nWhich football player has most instagram followers? \n 1.Messi \n 2.Ronaldo \n");
        scanf("%d", &q2);

        switch (q2)
        {
        case 1:
            printf("Wrong Answer");
            break;

        case 2:
            printf("You are Correct Again");
            break;

        default:
            printf("You didn`t choose the options from above");
            break;
        }
        break;

        // default is worked when every other condition is false
    default:
        printf("You didn`t choose the options from above");
        break;
    }
}