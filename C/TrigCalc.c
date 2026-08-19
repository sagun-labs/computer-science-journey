#include <stdio.h>

typedef struct
{
    float hypotenuse;
    float adjacent;
    float opposite;

    float sin;
    float cos;
    float tan;

} Trig;


void calculate(Trig *t)
{
    t->sin = t->opposite / t->hypotenuse;
    t->cos = t->adjacent / t->hypotenuse;
    t->tan = t->opposite / t->adjacent;
}


void display(Trig *t)
{
    printf("\n==============================\n");
    printf("           RESULT\n");
    printf("==============================\n");

    printf("Hypotenuse : %.2f\n", t->hypotenuse);
    printf("Adjacent   : %.2f\n", t->adjacent);
    printf("Opposite   : %.2f\n", t->opposite);

    printf("\nSIN = %.4f\n", t->sin);
    printf("COS = %.4f\n", t->cos);
    printf("TAN = %.4f\n", t->tan);

    printf("==============================\n");
}


int main()
{
    Trig t1;
    int choice;

    do
    {
        printf("\n");
        printf("==============================\n");
        printf("     TRIGONOMETRY CALCULATOR\n");
        printf("==============================\n");

        printf("1. Calculate sin, cos and tan\n");
        printf("2. Exit\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);


        switch (choice)
        {
            case 1:

                printf("\nEnter hypotenuse: ");
                scanf("%f", &t1.hypotenuse);

                printf("Enter adjacent: ");
                scanf("%f", &t1.adjacent);

                printf("Enter opposite: ");
                scanf("%f", &t1.opposite);


                if (t1.hypotenuse <= 0 ||
                    t1.adjacent <= 0 ||
                    t1.opposite <= 0)
                {
                    printf("\nInvalid values!\n");
                    break;
                }


                calculate(&t1);
                display(&t1);

                break;


            case 2:

                printf("\nExiting calculator...\n");
                break;


            default:

                printf("\nInvalid choice!\n");
        }

    } while (choice != 2);


    return 0;
}
