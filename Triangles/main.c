#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a,b,c;
    int sum;
    printf("Enter the edge lengths of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    sum = (a+b+c);
    printf("circumference of triangle is %d\n",sum);


    if(a==b && a==c && b==c)
    {
        printf("equilateral triangle");
    }
    if(a==b && a!=c || b==c && b!=a || a==c && a!=b)
    {
        printf("isosceles triangle");
    }
    if(a!=b && a!=c && b!=c)
    {
        printf("Scalene");
    }
    return 0;
}
