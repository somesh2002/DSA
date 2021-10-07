//Search for an element in an array.

#include <stdio.h>

int search(int *arr,int size,int number){
	for(int i=0;i<size;i++){
		if(*(arr+i)==number) return i+1;
	}
	return -1;
}

int main()

{	
	int arr[8]={2,5,6,8,7,15,20,72};
	int a=search(arr,8,3);
	if (a==-1){
		printf("\n Element does not exist in the array\n");
	}
	else{
		printf("\nElement found at index no. :- %d ",a);
	}
	return 0;
}