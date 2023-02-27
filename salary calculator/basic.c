#include <stdio.h>

main()
{
    int BasicSalary, Medical, Conveyance, GrossSalary;

    int tax = 2000;

    printf("Enter Basic Salary ");
    scanf("%d", &BasicSalary);

    printf("Enter Medical ");
    scanf("%d", &Medical);

    printf("Enter Conveyance Allowance ");
    scanf("%d", &Conveyance);

    printf("Tax %d \n ", tax);

    GrossSalary = (BasicSalary + Medical + Conveyance) - tax;

    printf("Gross Salary is %d", GrossSalary);
}