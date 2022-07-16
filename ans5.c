//Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main(){
    int i,N;
    printf("Enter the Value of N:");
    scanf("%d",&N);
    for ( i = 2*N; i >0 ; i--)
    { 
        if (i%2!=0)
    {   
    
        printf("%d ",i);
    }   
    }
    
return 0;
}