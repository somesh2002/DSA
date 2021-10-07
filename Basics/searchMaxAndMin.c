//Find the maximum/minimum of an element in the array.
#include <stdio.h>

void maxMin(int *arr,int size){
int max=arr[0],min=arr[0];

for (int i=0;i<size;i++){
	if (*(arr+i)>max){
		max=*(arr+i);
	}

	if (*(arr+i)<min){
		min=*(arr+i);
	}
}


printf("\n Maximum %d, Minimum %d \n",max,min);
}


int main()
{	int size=10;
	int arr[]={2,3,4,8,5,10,15,20,25,48};
	maxMin(arr,size);
	return 0;
}