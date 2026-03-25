#include<stdio.h>

int main()
{
    int n, r, o, ad = 0;

    printf("Enter any value of n: ");
    scanf("%d", &n);
    o = n;
    while(n != 0)
    {
        r = n % 10;
        ad = ad + (r * r * r);  
        n = n / 10;             
    }
    if(o == ad)
    {
        printf("The given number is Armstrong");
    }
    else
    {
        printf("The given number is not Armstrong");
    }
    return 0;
}