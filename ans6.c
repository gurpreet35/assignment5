//Write a program to print the first N even natural numbers
#include<stdio.h>
int main(){
    int i,N;
    printf("Enter the Value of N:");
    scanf("%d",&N);
    for ( i = 1; i <=2*N ; i++)
    { 
        if (i%2==0)
    {   
    
        printf("%d ",i);
    }   
    }
    
return 0;
}