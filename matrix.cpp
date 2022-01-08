#include<stdio.h>
int main(void)
{  
int row,column;
int mat[column][row],i,j;

printf("\nHere is your row:\n"); 
 scanf("%d",&row); 
printf("\nHere is your column:\n"); 
  scanf("%d",&column); 
printf("Enter your matrix\n");  
for(i=0;i<column;i++)
  for(j=0;j<row;j++)
  {  
    scanf("%d",&mat[i][j]);  
  }  
printf("\nHere is your matrix:\n");   
for(i=0;i<column;i++)    
{  
    for(j=0;j<row;j++)  
    {  
      printf("%d ",mat[i][j]);  
    }  
    printf("\n");  
  }  

}
