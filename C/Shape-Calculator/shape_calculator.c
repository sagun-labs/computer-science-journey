#include <stdio.h>

int main()
{
    int choice;
    int side;
    int length;
    int width;
    int base;
    int height;
    int top;
    int bottom;
    int side2;
    int side3;
    int radius;
    int chose;

    const float PI = 3.14159;

    do
    {
        printf("\n===== SHAPE CALCULATOR =====\n\n");
        printf("1. Square\n");
        printf("2. Rectangle\n");
        printf("3. Circle\n");
        printf("4. Triangle\n");
        printf("5. Parallelogram\n");
        printf("6. Trapezoid\n");
        printf("7. Exit\n");

        printf("\nEnter the number: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the side of the square: ");
                scanf("%d", &side);

                printf("Area = %d\n", side * side);
                printf("Perimeter = %d\n", 4 * side);
                break;

            case 2:
                printf("Enter the length of rectangle: ");
                scanf("%d", &length);

                printf("Enter the width of the rectangle: ");
                scanf("%d", &width);

                printf("Area = %d\n", length * width);
                printf("Perimeter = %d\n", 2 * (length + width));
                break;

            case 3:
                printf("Enter the radius of the circle: ");
                scanf("%d", &radius);

                printf("Area = %.2f\n", PI * radius * radius);
                printf("Circumference = %.2f\n", 2 * PI * radius);
                break;

            case 4:
                printf("Enter the base of the triangle: ");
                scanf("%d", &base);

                printf("Enter the height of the triangle: ");
                scanf("%d", &height);

                printf("Enter side 1 of the triangle: ");
                scanf("%d", &side);

                printf("Enter side 2 of the triangle: ");
                scanf("%d", &side2);

                printf("Enter side 3 of the triangle: ");
                scanf("%d", &side3);

                printf("Area = %.2f\n", (base * height) / 2.0);
                printf("Perimeter = %d\n", side + side2 + side3);
                break;

            case 5:
                printf("Enter the base of the parallelogram: ");
                scanf("%d", &base);

                printf("Enter the height of the parallelogram: ");
                scanf("%d", &height);

                printf("Enter the side of the parallelogram: ");
                scanf("%d", &side);

                printf("Area = %d\n", base * height);
                printf("Perimeter = %d\n", 2 * (base + side));
                break;

            case 6:
                printf("Enter the height of the trapezoid: ");
                scanf("%d", &height);

                printf("Enter the top of the trapezoid: ");
                scanf("%d", &top);

                printf("Enter the bottom of the trapezoid: ");
                scanf("%d", &bottom);

                printf("Enter side 1 of the trapezoid: ");
                scanf("%d", &side);

                printf("Enter side 2 of the trapezoid: ");
                scanf("%d", &side2);

                printf("Area = %.2f\n", ((top + bottom) * height) / 2.0);
                printf("Perimeter = %d\n", top + bottom + side + side2);
                break;

            case 7:
                printf("Exiting calculator...\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }

        printf("\nDo you want to continue? (1 = yes | 2 = no): ");
        scanf("%d", &chose);

    } while (chose == 1);

    printf("\nCalculator ended.\n");

    return 0;
}
