#include<stdio.h>
void swap(int*p, int*q);
int main(){
    int n1, n2;
    printf("Enter 1st number: ");
    scanf("%d", &n1);
    printf("Enter 2nd number: ");
    scanf("%d", &n2);
    printf("Before swapping: n1=%d, n2=%d\n\n", n1, n2);
    swap(&n1, &n2);
    printf("\nAfter swapping: n1=%d, n2=%d", n1, n2);
    return 0;
}
void swap(int*p, int*q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}