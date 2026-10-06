#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    int i;
    int regNo;
    char name[50];
    int marks;
    char grade;

    printf("====================================\n");
    printf("       STUDENT GRADING SYSTEM\n");
    printf("====================================\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter details for Student %d\n", i);

        printf("Registration Number: ");
        scanf("%d", &regNo);

        printf("Name: ");
        scanf("%s", name);

        printf("Marks: ");
        scanf("%d", &marks);

        /* Determine grade */
        if (marks >= 70 && marks <= 100)
        {
            grade = 'A';
        }
        else if (marks >= 60)
        {
            grade = 'B';
        }
        else if (marks >= 50)
        {
            grade = 'C';
        }
        else if (marks >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }

        /* Display results */
        printf("\n====================================\n");
        printf("         STUDENT RESULTS\n");
        printf("====================================\n");
        printf("Registration Number: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        /* Pass or fail */
        if (marks >= 40)
        {
            printf("Status: PASS\n");
        }
        else
        {
            printf("Status: FAIL\n");
        }

        printf("====================================\n");
    }

    return 0;
}

