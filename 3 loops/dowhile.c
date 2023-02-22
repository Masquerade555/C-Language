#include <stdio.h>

main()
{
    int a, b;
    a=1;
    b=1;

    //now for do while loop
    do
    {
        printf("this is line %d \n", a+b);
        b++;
    }
    while(b <= 10);


//another do while to plus all numbers until 0 is given
    int n;
    int sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%i", &n);
        sum += n;
    } 
    while (n != 0);

    printf("Sum is = %d \n", sum);
    


//another do while to countdown to 0 form the given number
    int num;
    int i = 0;
    printf("Enter a number\n");

    scanf("%d", &num);

    do{
        printf("%d \n", i + 1);
        i = i + 1;
    }
    while(i < num);
}