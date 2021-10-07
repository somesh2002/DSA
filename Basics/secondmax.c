//Find the second largest element in an array.
#include <stdio.h>

void secondmax(int *arr,int size){
int max=arr[0],second=arr[0];

for (int i=0;i<size;i++){
	if (*(arr+i)>max){
		second=max;
		max=*(arr+i);
	}

}


printf("\n Maximum %d, second max %d \n",max,second);
}


int main()
{	int size=10;
	int arr[]={2,3,4,8,5,10,15,20,25,48};
	secondmax(arr,size);
	return 0;
}