#include<stdio.h>
int main()
{
    int a[2][2] = {{1,2},{3,4}}; // 2D Matix elements
    printf("The 2D Matrix is :\n");
    for(int i=0; i<2 ; i++) // To find and print the Row block
    {
        for(int j=0; j<2 ;j++) // To find and print the Column block
        {
            if(j==0)
            {
                printf("|%d", a[i][j]);
            }
            else
            {
                printf(" %d|", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}