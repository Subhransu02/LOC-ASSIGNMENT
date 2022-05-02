#include<stdio.h>
void print_square(int n, int m){
    int i, j;
    for ( i = 0; i < n; i++)
    {
            if (i==0 || i==(n-1))
            {
                for ( j = 0; j < n; j++)
                {
                    printf("*");
                }   
            }
            else{
                for ( j = 0; j < n; j++)
                {
                    if (j==0 || j==(n-1))
                    {
                        printf("*"); 
                    }
                    else{
                        printf(" ");
                    }
                    
                }   
                
                
            }
            printf("\n");
            
        
    }
    
}
int main(){
    int rows=5, column=5;
    print_square(rows, column);
    return 0;
}