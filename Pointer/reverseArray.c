//C program to reverse an array using pointers.

#include <stdio.h>
 void reverse(int *ar,int size){
 	int temp;
 	for (int i=0;i<size/2;i++){
 		temp=*(ar+i);
 		*(ar+i)=*(ar+size-(i+1));
 		*(ar+size-(i+1))=temp;

 	}

 	for(int i=0;i<size;i++){
		printf("\t%d",ar[i]);
	}
	printf("\n");
 }
 int main(){

 	int arr[10]={1,2,3,4,5,6,7,8,9,10};
 	int size=10;
 	reverse(arr,size);
 	return 0;
 }