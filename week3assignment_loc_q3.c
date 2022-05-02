#include<stdio.h>
#define MAX 100
int findMAXElem(int[]);
int n;
int main(){
    int arr1[MAX], mxelem, i;
    printf("Enter the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    for ( i = 0; i < n; i++)
    {
        printf("Element -%d: ", i);
        scanf("%d", &arr1[i]);
    }
    mxelem=findMAXElem(arr1);
    printf("The largest element in the array is: %d\n\n", mxelem);
    return 0;
    
}

int findMAXElem(int arr1[]){
    int i=1, mxelem;
    mxelem=arr1[0];
    while (i<n)
    {
        if (mxelem<arr1[i])
        {
            mxelem=arr1[i];
            i++;
        }
        return mxelem;
    }
    
}