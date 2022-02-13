#include <stdio.h>

int main(){
	int column1,column2,row1,row2,choose,col,row;
	int firstarr[column1][row1],secondarr[column2][row2],resultarr[col][row];
	
	printf("Give number to firstarr[column][row] = ");
	scanf("%d %d",&column1,&row1);
	printf("Give number to secondarr[column][row] = ");
    scanf("%d %d",&column2,&row2);
	
	for(int i=0; i<column1; i++){
		for(int j=0; j<row1; j++){
				printf("Give number to firstarr[%d][%d] = ",i,j);
		        scanf("%d",&firstarr[i][j]);
		}
	}
	
	for(int k=0; k<column2; k++){
		for(int l=0; l<row2; l++){
				printf("Give number to firstarr[%d][%d] = ",k,l);
		        scanf("%d",&secondarr[k][l]);
		}
	}
		        	        
	again:
	printf("Enter two array and choose which mathematical operation you want 1-Add 2-Subract = ");
	scanf("%d",choose);
	
	switch(choose){
		
		case 1: 
		for(int m=0; m<column2; m++){
		  for(int n=0; n<row2; n++){
		  	
		  
				printf("%d",secondarr[m][n]);
				} 
				}
				
				break;
		
	/*	if(column2>=column1){
		
		for(int m=0; m<column2; m++){
		  for(int n=0; n<row2; n++){
		  	
		  	resultarr[m][n] = firstarr[m][n] + secondarr[m][n];
				printf("%d",resultarr[m][n]);
				
			
		       
	      	}
     	} 
   }    */
   
        /*else if(column2<column1){
		
		for(int m=0; m<column1; m++){
		  for(int n=0; n<row1; n++){
		  	
		  	resultarr[m][n] = firstarr[m][n] + secondarr[m][n];
				printf("%d",resultarr[m][n]);
				
				printf("\n");
		       
	      	}
     	} 
   }    */
		
	    case 2: 
	   
	    	
	    	break;
	    	
	    default: printf("Invalid number, try again...");
	    goto again;
	}

	
	
	
	return 0;
}
