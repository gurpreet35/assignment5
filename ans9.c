//Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main(){
    int i,N;
    printf("Enter the Value of N:");
    scanf("%d",&N);
    for ( i = 1; i <=N ; i++)
    {
        printf("\"%d\" is cube of %d \n",i*i*i,i);
    }
    
return 0;
}