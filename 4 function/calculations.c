//in this file we will do basic math calculations with function
#include <stdio.h>

main()
{
    //we will call functions through variables
    int AdditionVariable = Add();
    int SubstractionVariable = Sub();
    int MultiplicationVariable = Mul();
    int DivisionVariable = Div();

//printing the functions or showing function output
    printf(" Addition is %d \n",AdditionVariable);
    printf(" Substraction is %d \n",SubstractionVariable);
    printf(" Multiplication is %d \n",MultiplicationVariable);
    printf(" Division is %d \n",DivisionVariable);
}



//now to make functions
int Add()
{
    int a,b,c;
    a= 10;
    b= 5;
    
    //next variable will do the calculation u want
    //we are doing addition here
    c = a + b;
    return c;
}

int Sub()
{
    int a,b,c;
    a= 10;
    b= 5;
    
    //next variable will do the calculation u want
    //we are doing substraction here
    c = a - b;
    return c;
}

int Mul()
{
    int a,b,c;
    a= 10;
    b= 5;
    
    //next variable will do the calculation u want
    //we are doing multiplication here
    c = a * b;
    return c;
}

int Div()
{
    int a,b,c;
    a= 10;
    b= 5;
    
    //next variable will do the calculation u want
    //we are doing division here
    c = a / b;
    return c;
}

//done
