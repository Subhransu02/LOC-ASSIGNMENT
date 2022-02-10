//Q1
#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your Name: ");
    gets(name);

    char branch[20];
    printf("Enter your Branch: ");
    gets(branch);

    char hobbies[20];
    printf("Enter your Hobbies: ");
    gets(hobbies);

    int num;
    printf("Enter your Regd. No.: ");
    scanf("%d", &num);

    printf("Name: ", name);
    puts(name);

    printf("Branch: ", branch);
    puts(branch);

    printf("Hobbies: ", hobbies);
    puts(hobbies);

    printf("Regd. No.: %d\n", num);
    return 0;
}
