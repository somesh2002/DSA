/*There are two arrays of numbers. Output the 
(a) union of numbers in the arrays 
(b) intersection of numbers in the arrays
*/
#include <stdio.h>

void unionSets(int arr1[], int arr2[],int size1,int size2){
	int arr[10],i,j,flag=0;
	for(i=0;i<size1;i++){
		arr[i]=arr1[i];
	}

	for(j=0;j<size2;j++){
		flag=0;
		for(int k=0;k<size1;k++){
			if (arr2[j]==arr1[k]) {
				flag=1;
				break;
			}
		}
		if (flag==0) {
	
			arr[i]=arr2[j];
			i++;
		}
	}

	for(i=0;i<9;i++){
		printf("\t%d",arr[i]);
	}
	printf("\n");

}

void intersection(int arr1[], int arr2[],int size1,int size2){


	int section[10],i=0,j,k,size=0;

	printf("\n");
	for(j=0;j<size2;j++){
		for(k=0;k<size1;k++){
			if (arr2[j]==arr1[k]) {
				section[i]=arr1[k];
				i++;
				size++;
				break;
			}
		}	

	}

	for(i=0;i<size;i++){
		printf("\t%d",section[i]);
	}
	printf("\n");
}

int main()
{	int size1=4;
	int size2=5;
	int arr1[5]={8,5,2,4,9};
	int arr2[5]={8,10,3,9,4};
	int i=0;
	unionSets(arr1,arr2,size1,size2);

	intersection(arr1,arr2,size1,size2);
	return 0;
}