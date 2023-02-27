#include <stdio.h>

main()
{
    int v1, v2, v3;

    printf("Enter value of A \n");
    scanf("%d", &v1);

    printf("Enter value of B \n");
    scanf("%d", &v2);

    printf("What do you wanna do? \nPress 1 for Addition \nPress 2 for Multiplication \nPress 3 for Substraction \nPress 4 for Division \n");
    scanf("%d", &v3);

    int Num = Add(v1,v2);
    int Num2 = Mul(v1,v2);
    int Num3 = Sub(v1,v2);
    int Num4 = Div(v1,v2);

    if (v3 == 1)
    {
        printf("%d \n", Num);
    }
    else if (v3 == 2)
    {
        printf("%d \n", Num2);
    }
    else if (v3 == 3)
    {
        printf("%d \n", Num3);
    }
    else if (v3 == 4)
    {
        printf("%d \n", Num4);
    }
    else
    {
        printf("wrong choice");
    }
    
}

int Add(int Num1, int Num2)
{
    int a, b, c;
    a = Num1;
    b = Num2;
    c = a + b;
    return c;
}

int Mul(int Num1, int Num2)
{
    int a, b, c;
    a = Num1;
    b = Num2;
    c = a * b;
    return c;
}

int Sub(int Num1, int Num2)
{
    int a, b, c;
    a = Num1;
    b = Num2;
    c = a - b;
    return c;
}

int Div(int Num1, int Num2)
{
    int a, b, c;
    a = Num1;
    b = Num2;
    c = a / b;
    return c;
}