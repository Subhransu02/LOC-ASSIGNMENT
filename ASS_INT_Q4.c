#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
    case 0:
        switch (num < 0)
        {
        case 1:
            printf("The number %d is negative.", num);
            break;

        case 0:
            printf("The number %d is zero.", num);
            break;
        }
    case 1:
    printf("The number %d is positive.", num);
        return 0;
    }
    return 0;
}