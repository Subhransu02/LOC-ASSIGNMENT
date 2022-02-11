//Q2
#include<stdio.h>

int main() {
   int num1, num2;
   printf("Enter number 1: ");
   scanf("%d", &num1);

   printf("Enter number 2: ");
   scanf("%d", &num2);
   
   if (num1>num2)
   {
       printf("Max between two numbers is: %d",num1);
   }
   else if (num1==num2)
   {
       printf("Both are equal");
   }
   else{
       printf("Max between two numbers is: %d",num2);
   }
       
   
   return 0;
}

