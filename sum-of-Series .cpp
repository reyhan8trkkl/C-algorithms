/*  C program to find sum of Series : 1^2+2^2+3^2+4^2+....+N^2  */

#include<stdio.h>

int main()
{
    int i,N;
    unsigned long sum;

    /*read value of N*/
    printf("\nEnter the value of N :");
    scanf("%d",&N);

    sum=0;

    for(i=1;i<=N;i++)
        sum= sum+ (i*i);


    printf("\nSum of the series is =  %ld \n",sum);

    return 0;
}
