/********************************************************
    This program will be a menu driven program where
    the user will be prompted through the menu until
    option 11.

    Name: Aleksandar Andric
    date: 9/30/18
********************************************************/
#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int choice;

    do
    {
        // display menu
        cout << "\n     ***LOOPS***\n";
        printf("1. While Loop\n");
        printf("2. For Loop\n");
        printf("3. Odd numbers 1 - 50\n");
        printf("4. Positive numbers\n");
        printf("5. Negative numbers\n");
        printf("6. Sum of all even numbers\n");
        printf("7. Table of integers\n");
        printf("8. Asterisk characters\n");
        printf("9. Asterisk shape 1\n");
        printf("10. Asterisk shape 2\n");
        cout << "11. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // process choice

        switch (choice)
        {
            case 1:
            {
                int a = 0;
                while (a < 15)
                {
                    printf("*");
                    a++;
                }
            }
            break;
            case 2:
            {
                for (int b = 0; b < 15; b++)
                {
                    printf("*");
                }
            }
            break;
            case 3:
            {
                for (int i = 1; i <= 50; i++)
                {
                    if (i % 2 != 0)
                    {
                        printf("%d ", i);
                    }
                }
            }
            break;
            case 4:
            {
                int max;
                printf("Enter a number: ");
                cin >> max;

                if (max > 0)
                {
                    for (int i = 1; i <= max; i++)
                    {
                        printf("%d ", i);
                    }
                }
            }
            break;
            case 5:
            {
                int num;
                cout << "\nEnter a negative number: ";
                cin >> num;
            }
            break;
            case 6:
            {
                cout << "Please enter a positive number: ";
                int max;
                cin >> max;
                int total = 0;

                for (int i = 2; i <= max; i++)
                {
                    if (i % 2 == 0)
                    {
                        total += i;
                    }
                }
                printf("%d", total);

                return 0;
            }
            break;
            case 9:
            { // draw a right triangle

                for (int row = 1; row <= 10; row++) // counts how many rows
                {
                    for (int x = 1; x <= row; x++) // counts how many x's across
                        cout << "x";
                    cout << endl;
                }
            }
            break;
            case 10:
            {
                for (int i = 0; i < 10; i++)
                {
                    for (int j = 0; j < i; j++)
                    {
                        printf(" ");
                    }
                    for (int j = i; j < 10; j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
            }
            break;
            default:
                cout << " ERROR - Please choose a number 1-4.\n";
        }

    } while (choice != 11);
    return 0;
}
