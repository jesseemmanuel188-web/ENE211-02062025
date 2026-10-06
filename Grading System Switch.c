#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int regNo;
    char name[50];
    int marks;
    int category;
    char grade;

    printf("====================================\n");
    printf("       STUDENT GRADING SYSTEM\n");
    printf("          SWITCH VERSION\n");
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

        /*
           Convert marks into a category
        */
        if (marks >= 70)
        {
            category = 7;
        }
        else if (marks >= 60)
        {
            category = 6;
        }
        else if (marks >= 50)
        {
            category = 5;
        }
        else if (marks >= 40)
        {
            category = 4;
        }
        else
        {
            category = 3;
        }

        /* Determine grade using switch */
        switch (category)
        {
            case 7:
                grade = 'A';
                break;

            case 6:
                grade = 'B';
                break;

            case 5:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            default:
                grade = 'F';
        }

        /* Display information */
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

