#include<stdio.h>
#include<math.h>
int main(){
    int n, firstdigit, lastdigit, digits, swappednum;
    printf("Enter a number: ");
    scanf("%d", &n);

    lastdigit=n%10;
    digits=(int)log10(n);
    firstdigit=(int)(n/pow(10, digits));
    swappednum=lastdigit;
    swappednum *= (int)round(pow(10, digits));
    swappednum += n%((int)round(pow(10, digits)));
    swappednum -= lastdigit;
    swappednum += firstdigit;
    printf("Numbers after swapping first and last digit: %d", swappednum);
    return 0;
}