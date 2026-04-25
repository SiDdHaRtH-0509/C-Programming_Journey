#include<stdio.h>
int main()
{
    int row, column;
    int a[row][column];
    printf("No of Row: ", row);
    scanf("%d", &row);
    printf("No of Column: ", column);
    scanf("%d", &column);
    for(int i=0; i<row;i++)
    {
        for(int j=0; j<column; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int s=0; s<row; s++)
    {
        for(int n=0; n<column; n++)
        {
            scanf("%d",&a[s][n]);
        }
    }
    printf("\n");
    return 0;
}