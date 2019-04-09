//WAP to find the area of a triangle.
#include<stdio.h>

float areaOfTriangle(int base, int altitude)
{
    return ((float)(base * altitude)) / 2;
}

int main()
{
    int base, altitude;
    float area;
    printf("Enter the values of Base and Altitude of triangle respectively: ");
    scanf("%d %d", &base, &altitude);
    area = areaOfTriangle(base, altitude);
    printf("\nThe area of the triangle is %f\n", area);
    return 0;
}