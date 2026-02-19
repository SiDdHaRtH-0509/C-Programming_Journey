#include <stdio.h>
#define PI 3.14
int main()
{
    float radius,area;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);
    area = PI*(radius)*(radius);
    printf("The area of the required circle is: %2f\n", area);
    return 0;
}