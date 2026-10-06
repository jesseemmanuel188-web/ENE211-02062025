#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin;
    int correctPin = 1132;
    int attempts = 3;
    int choice;
    int digits;

    printf("====================================\n");
    printf("       PIN-BASED DOOR LOCK\n");
    printf("====================================\n");

    while (attempts > 0)
    {
        printf("\nEnter your PIN: ");
        scanf("%d", &pin);

        /* Check number of digits */
        if (pin < 1000)
        {
            printf("PIN is too short (must be 4 digits)\n");
        }
        else if (pin > 9999)
        {
            printf("PIN is too long (must be 4 digits)\n");
        }
        else
        {
            printf("PIN is exactly 4 digits\n");
        }

        /* Check PIN */
        if (pin == correctPin)
        {
            printf("\nCorrect PIN!\n");
            printf("Access granted.\n");

            /* Menu */
            do
            {
                printf("\n========== MENU ==========\n");
                printf("1. Unlock Door\n");
                printf("2. Change Username\n");
                printf("3. Change PIN\n");
                printf("4. Exit\n");
                printf("===========================\n");

                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice)
                {
                    case 1:
                        printf("Access granted. Door unlocked.\n");
                        break;

                    case 2:
                        printf("Change username feature coming soon.\n");
                        break;

                    case 3:
                        printf("Change PIN feature coming soon.\n");
                        break;

                    case 4:
                        printf("Exiting system.\n");
                        break;

                    default:
                        printf("Invalid option! Please try again.\n");
                }

            } while (choice != 4);

            return 0;
        }
        else
        {
            attempts--;

            if (attempts > 0)
            {
                printf("Incorrect PIN!\n");
                printf("Remaining attempts: %d\n", attempts);
            }
        }
    }

    /* Lockout */
    printf("\nSystem locked! Wait for 5 seconds...\n");

    for (digits = 5; digits >= 1; digits--)
    {
        printf("%d...\n", digits);
    }

    printf("try again.\n");

    return 0;
}

