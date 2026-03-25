//To Find the Factorial of a number given by the User with the help of while function
#include<stdio.h>
int main()
{
    int n,i=1, f=1;
    printf("Enter any number: ");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("Enter a valid number");
    }
    else
    {
        while(i<=n)
        {
            f=f*i;
            i++;
        }
    }
    printf("Factorial of a given number %d = %d", n ,f);
    return 0;
}