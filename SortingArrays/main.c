#include <stdio.h>
#include <stdlib.h>

void sort(int array[],int size)
{
    int i,j,temp;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("dizinin sirali hali:");
    for(i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
}
int main ()
{
    int i,size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int array[size];
    printf("elements of the array:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    sort(array,size);


    return 0;
}
