
#include<stdio.h>
int main()
{
    int radius;
    float area;
    printf("Enter Radius\n");
    scanf("%d",&radius);

    area = 3.14*radius*radius;

    printf("Area of Circle = %f\n",area);

    return 0;
}
