#include<stdio.h>
int square(int n);//Global Declaration of a function
int main()
{
    int c,l;
    printf("Give any number for a valus of l : ");
    scanf("%d", &l);
    c= square(l);
    printf("Square = %d", c);
    return 0;
}
int square(int n)
{
    return n*n;
}