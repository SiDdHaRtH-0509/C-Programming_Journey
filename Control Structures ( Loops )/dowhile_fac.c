//To find the Factorial of the given number with the help of DO-WHILE function
#include<stdio.h>
int main()
{
    int n,i=1, f=1;
    printf("Enter any number: ");
    scanf("%d", &n);
    do
    {
        f*=i;
        i++;
    } while (i<=n);
    printf("Factorial of the given number %d : %d", n,f);
    return 0;
}