#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter number of Students: ");
    scanf("%d",&n);

    int marks1, marks2, marks3, total;
    float average;
    char grade;

    int passcount = 0, failcount = 0;

    // Loop through all students
    for(int i = 1; i <= n; i++)
    {
        printf("\nEnter marks of 3 subjects for student %d:\n",i);
        scanf("%d\n %d\n %d", &marks1, &marks2, &marks3);

        // Calculate total and average
        total = marks1 + marks2 + marks3;
        average = total/3;

        // Pass/Fail logic
        int isFail = (marks1 < 40 || marks2 < 40 || marks3 < 40);

        // Grade system
        if (average >= 90)
        grade = 'A';
        else if (average >= 75)
        grade = 'B';
        else if (average >= 60)
        grade = 'C';
        else if (average >= 40)
        grade = 'D';
        else 
        grade = 'F';

        // Display result
        printf("\n--- Student %d ---\n", i);
        printf("Total = %d\n", total);
        printf("Average = %.2f\n", average);
        printf("Grade = %c\n", grade);

        if (isFail)
        {
            printf("Result = FAIL beacuse student is fail in one or more than one subject.\n");
            failcount++;
        }
        else
        {
            printf("Result = PASS.\n");
            passcount++;
        }
    }
    // Final Summary
    printf("\n===== FINAL SUMMARY =====\n");
    printf("Passed Students = %d\n", passcount);
    printf("Failed Students = %d", failcount);

    return 0;
}