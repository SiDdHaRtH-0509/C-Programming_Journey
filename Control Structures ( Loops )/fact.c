#include<stdio.h>
int main()
{
    int n, i, f=1;
    printf("Take any number as n: ");
    scanf("%d", &n);
    if(n<0)
    printf("Factorial of given number can't be found");
    else
    {
        for(i=1; i<=n ; i++)
        {
            f=f*i;
        }
    }
    printf("Factorial of the number is %d = %d",n, f);
    return 0;
}