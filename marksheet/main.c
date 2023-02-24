#include <stdio.h>
#include <string.h>

main()
{
    char Name[10];
    int v1,v2,v3, roll, total;
    float percentage;

    printf("Enter your name: ");
    scanf("%s", &Name);

    printf("Enter your roll number: ");
    scanf("%d", &roll);

    printf("Enter your 1st subject marks:");
    scanf("%d", &v1);

    printf("Enter your 2nd subject marks:");
    scanf("%d", &v2);

    printf("Enter your 3rd subject marks:");
    scanf("%d", &v3);

    total = (v1+v2+v3);

    printf("%s Your roll number is %d and your obtained marks out of 300 are %d \n", Name,roll,total);

    percentage = (total*100) / 300;

    printf("your percentage is %f \n",percentage);

    if (percentage > 70)
    {
        printf("Grade A");
    }
    else if (percentage > 50)
    {
        printf("Grade B");
    }
    else if (percentage > 30)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }
    
}