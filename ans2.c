//Write a program to print the first N natural numbers.
#include<stdio.h>
int main(){
    int i=1,N;
    printf("Enter the Value of N:");
    scanf("%d",&N);
    while(i<=N){
    printf("%d\n",i);
    i++;
}
return 0;
}