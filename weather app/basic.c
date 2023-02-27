#include <stdio.h>

main()
{
    int temperature;
    printf("Enter temperature in Centigrade ");
    scanf("%d",&temperature);

    if (temperature <10)
    {
        printf("Its %d ouside Stay safe of that freezing weather", temperature);
    }
    else if (temperature >= 10 && temperature <20)
    {
        printf("its %d, Its very Cold", temperature);
    }
    else if (temperature >= 20 && temperature <30)
    {
        printf("its %d, Its Cold", temperature);
    }
    else if (temperature >= 30 && temperature <40)
    {
        printf("its %d, Its normal", temperature);
    }
    else if (temperature >= 40 && temperature <50)
    {
        printf("its %d, Its hot", temperature);
    }
    else if (temperature < 60)
    {
        printf("its %d, Its very hot", temperature);
    }
    else
    {
        printf("Invalid temperature");
    }
    
    
}