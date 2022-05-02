#include<stdio.h>
int iseven(int num){
    return !(num & 1);
}
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (iseven(num))
    {
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }
    return 0;
}