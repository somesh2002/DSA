/*There are two arrays of numbers. Output the 
(a) union of numbers in the arrays 
(b) intersection of numbers in the arrays
*/
#include <stdio.h>

void unionSets(int arr1[], int arr2[],int size1,int size2){
	int arr[9],i,j;
	for(i=0;i<size1;i++){
		arr[i]=arr1[i];
	}

}

void intersection(int arr1[], int arr2[],int size1,int size2){

}

int main()
{	int size1=4;
	int size2=5;
	int arr1[4]={8,4,5,2};
	int arr2[5]={8,4,10,3,9};
	unionSets(arr1,arr2,size1,size2);
	intersection(arr1,arr2,size1,size2);
	return 0;
}