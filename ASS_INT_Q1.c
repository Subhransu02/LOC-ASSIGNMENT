#include<stdio.h>

int main() {
   float a;
   float b;

   printf("Enter the value of tempreature in farenheit: ");
   scanf("%f", &a);

   b = a*5/9 - 32;

   printf("The value of tempreature in centigrade  is: %f", b);
   
   return 0;
}
