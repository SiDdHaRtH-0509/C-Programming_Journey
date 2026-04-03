#include <stdio.h>

// Function to perform calculations
void calculate(int x, int y)
{
    printf("\n----- Results -----\n");

    printf("Sum : %d\n", x + y);
    printf("Difference : %d\n", x - y);
    printf("Multiplication : %d\n", x * y);

    if (y != 0)
    {
        printf("Division : %d\n", x / y);
        printf("Modulus : %d\n", x % y);
    }
    else
    {
        printf("Division : Not possible (division by zero)\n");
        printf("Modulus : Not possible (division by zero)\n");
    }
}

int main()
{
    int x, y;

    printf("=== Simple Calculator ===\n");

    printf("Enter value of x: ");
    scanf("%d", &x);

    // Loop until valid y value is entered
    while (1)
    {
        printf("Enter value of y: ");
        scanf("%d", &y);

        if (y == 0)
        {
            printf("Warning: Division by zero is not allowed. Try again.\n");
        }
        else
        {
            break;
        }
    }

    calculate(x, y);

    return 0;
}