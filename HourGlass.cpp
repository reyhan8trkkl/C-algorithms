#include<stdio.h>

int main(){
    int i,j,k,l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=2;k>=i;k--)
        {
            printf("*");
        }
        for(l=2;l>i;l--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=2;j>i+1;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i+1;k++)
        {
            printf("*");
        }
        for(l=0;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }


return 0;
}
