//Write a program in C that calculates the value of N! when user provides the value of N as input.





#include <stdio.h>

int main (void)


{
    int i,N;

    long long fact=1;
    printf("Enter your number: ");
    scanf("%d", &N);
        i=1;
    while ( i<=N)
       {
           fact*=i;
           i++;
       }

      printf("The factorial number of %d is %lld\n", N,fact);







    return 0;
}
