#include <stdio.h>
int main()
{
    int n=0;
    printf("Enter any value of n:  ");
    scanf("%d", &n);
    if(n %4 == 0 & n %5 == 0)
    {
        printf("The number n is divisible by both 4 and 5");
    }
    else
    {
        printf("The number n is not divisible by both 4 and 5");
    }
    return 0;
}