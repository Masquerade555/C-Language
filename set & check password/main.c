#include <stdio.h>

main()
{
    int password, pass;

    printf("Welcome \n");
    printf("Set your password \n");

    // we will store passwrod in password variable
    scanf("%d \n", &password);

    printf("you entered your password: %d \n", password);

    printf("Now to check your password if it matches \n");
    printf("Enter your password: \n");

    // now we will store the checking password in pass variable
    scanf("%d \n", &pass);

    if (pass == password)
    {
        printf("Login successfull");
    }
    else{
        printf("Wrong password");
    }

    
}