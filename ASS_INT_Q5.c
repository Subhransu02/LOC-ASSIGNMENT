#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("The number %d is divisible by 5", num);
    }
    else if (num % 11 == 0)
    {
        printf("The number %d is divisible by 11", num);
    }
    else
    {
        printf("The number %d is not divisible either by 5 or 11.", num);
    }

    return 0;
}