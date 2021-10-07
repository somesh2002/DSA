/*Write a C function to display and find the sum of the series 1+11+111+....111 upto n. For eg. if
n=4, the series is : 1+11+111+1111.*/

#include <stdio.h>

int numbergenerate(int n){
	int sum=0;
	while(n!=0){
		sum=sum*10+1;
		n--;
	}
	return sum;
}
void series(int n){
	int sum=0;
	for(int i=1;i<n+1;i++){
		sum+=numbergenerate(i);
	}
	printf("\t%d",sum);
}

int main()
{	int n=10;

	series(n);
	return 0;
}