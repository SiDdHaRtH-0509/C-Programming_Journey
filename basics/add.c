#include<stdio.h>
int add(int x,int y);//Global Declaration of a function
int multiplication(int a, int b);//Global Declaration of a function for multiplication
int main()
{
    int c,l,n,d;
    printf("Give any number for a value of c : ");
    scanf("%d", &c);
    printf("Give any number for a value of l : ");
    scanf("%d", &l);
    n= add(c,l);
    d= multiplication(c,l);
    printf("Add = %d\n",n);
    printf("Multiplication = %d", d);
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
int multiplication(int a,int b)
{
    return a*b;
}
