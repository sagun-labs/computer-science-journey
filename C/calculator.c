#include <stdio.h>

int main()
{
    float num1, num2;
    char op;
    int choice;

    do
    {
        printf("Enter the num1: ");
        scanf("%f", &num1);

        printf("Enter the operation (+ - * /): ");
        scanf(" %c", &op);

        printf("Enter the num2: ");
        scanf("%f", &num2);

        switch (op)
        {
            case '+':
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;

            case '-':
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;

            case '*':
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;

            case '/':
                if (num2 != 0)
                {
                    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                }
                else
                {
                    printf("Cannot divide by zero.\n");
                }
                break;

            default:
                printf("Invalid choice.\n");
        }

        printf("\nDo you want to continue the calculator (1 = yes | 2 = no): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("Calculator ended.\n");

    return 0;
}
