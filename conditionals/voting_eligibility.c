#include <stdio.h>
int main()
{
    int age;
    printf("Enter the Person's age: ");
    scanf("%d", &age);
    if( age>=18)
    {
        printf("The Person is ELIGIBLE to give VOTE");
    }
    else
    {
        printf("The Person is NOT ELIGIBLE to give VOTE");
    }
    return 0;
}