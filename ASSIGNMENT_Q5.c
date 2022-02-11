#include <stdio.h>

int main()
{
    int radius;
    int D;
    int Circumference;
    int Area;
    int op;

    printf("Enter the radius: ");
    scanf("%d", &radius);

    printf("Enter your choice: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        D = radius * 2;
        printf("The diameter is %d", D);
        scanf("%d", &D);
        break;

    case 2:
        float Circumference = 2 * 3.14 * radius ;
        printf("The Circumference is %f", Circumference);
        break;
    case 3:
        float Area = 3.14 * radius * radius;
        printf("The Area is %f", Area);
        break;
    }

    return 0;
}
