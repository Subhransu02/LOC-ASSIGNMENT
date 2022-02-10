#include <stdio.h>

int main()
{
    int op, num1, num2;
    printf("Enter a number 1: ");
    scanf("%d", &num1);
    printf("Enter a number 2: ");
    scanf("%d", &num2);
    printf("Enter your choice: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("%d + %d: %d", num1, num2, num1 + num2);
        break;

    case 2:
        printf("%d - %d: %d", num1, num2, num1 - num2);
        break;

    case 3:
        printf("%d * %d: %d", num1, num2, num1 * num2);
        break;

    case 4:
        printf("%d % %d: %d", num1, num2, num1 % num2);
        break;
    }

    return 0;
}
