#include<stdio.h>
void main()
{
    int n , o, r,  rev=0;
    printf("Enter any value of n : ");
    scanf("%d", &n);
    o=n;
    while(n!=0)
    {
       r=n%10;
       rev=rev*10 + r;
       n=n/10;
    }
    if(o==rev)
    {
        printf("Entered number is palindrome");
    }
    else{
        printf("Entered number is not palindrome");
    }
}