#include <stdio.h>
#include <stdlib.h>

//write the c program that determines the earthquake character according to the scale information received from the user
int main ()
{
    float scale;
    printf("Enter the Richter scale: ");
    scanf("%f",&scale);

    if(scale < 5.0)
    {
        printf("undamaged.");
    }
    else if(scale >= 5.0 && scale < 5.5)
    {
        printf("little damaged.");
    }
    else if(scale >= 5.5 && scale < 6.5)
    {
        printf("seriously damaged.");
    }
    else if(scale >= 6.5 && scale < 7.5)
    {
        printf("Disaster: houses and buildings may collapse.");
    }
    else
    {
        printf("Disaster:all structures are destroyed.");
    }
    return 0;
}
