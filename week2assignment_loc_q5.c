#include <stdio.h>
#include <string.h>
void printReverse(char str[]){
    int length = strlen(str);
    int i;
    for ( i = length-1; i >= 0; i--)
    {
        if (str[i]==' ')
        {
            str[i]='\0';
            printf("%s", &(str[i]));
        }
        
    }
    printf("%s", str);
    
}
int main()
{
    char string1[20], string2[20];
    int i, j, pos;

    memset(string1, 0, 20);
    memset(string2, 0, 20);

    printf("Enter the first string: ");
    scanf("%d", string1);
    printf("Enter the second string: ");
    scanf("%d", string2);

    printf("First string = %s\n", string1);
    printf("Second string = %s\n", string2);

    for ( i = 0; string1[i] != '\0'; i++)
    {
        ;
    }
    pos=1;
    for ( j = 0;  string2[j] != '\0' ; i++)
    {
      string1[i]=string2[j++];
    }
    string1[i]='\0';
    printf("Concatenated string = %s\n", string1);
    
    printReverse(string1);
    return 0;
}