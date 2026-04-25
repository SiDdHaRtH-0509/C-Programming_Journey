#include<stdio.h>
int main()
{
    int a[2][2] = {{1,2},{3,4}}; // 2D Matix elements
    int b[2][2] = {{5,6}, {7,8}}; // Another 2D Matrix elements
    int i,j;
    int n,s;
    int Subtraction[2][2];
    int c,l;
    printf("The 2D Matrix is :\n\n");
    for( i=0; i<2 ; i++) // To find and print the Row block
    {
        for(j=0; j<2 ;j++) // To find and print the Column block
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
    printf("\n");
    for(n=0; n<2; n++)
    {
        for(s=0 ; s<2; s++)
        {
            if(s==0)
            {
                printf("|%d", b[n][s]);
            }
            else
            {
                printf(" %d|", b[n][s]);
            }
        }
        printf("\n");
    }
    printf("\nSubtraction : \n ");
    for(c=0; c<2; c++)
    {
        for(l=0;l<2;l++)
        {
           if(l==0)
           {
               Subtraction[c][l] = a[c][l] - b[c][l];
               printf("|%d", Subtraction[c][l]);
           }
           else
           {
               Subtraction[c][l] = a[c][l] - b[c][l];
               printf(" %d|", Subtraction[c][l]);
           }       
           
           
        }
        printf("\n");
    }
    return 0;
}