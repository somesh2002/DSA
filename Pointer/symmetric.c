/*Write a C function that takes as parameter a matrix 
(two dimensional array) and returns
1 if it is symmetric and 0 otherwise.*/

#include <stdio.h>
#include<stdlib.h>

int symmetric(int matrix[][3],int rows,int cols){
	
	if (rows!=cols) return -1;
		for(int i=0;i<rows;i++){
			
			for(int j=0;i<cols;i++){
			if(matrix[i][j]!=matrix[j][i]) return 0;	
			}		
		}
		return 1;
	
	
}

int main(){
	int matrix[][3]={{2,3,5},{3,5,6},{4,6,9},{4,6,9}};
	int rows=3,cols=3;
	int result = symmetric(matrix,rows,cols);
	
	if(result==-1){
		printf("\n Matrix should be a squae matrix");
	}

	else if(result){
		printf("Matrix is symmetric\n");
	}
	else {
		printf("Matrix is not symmetric\n");
	}
	return 0;
}