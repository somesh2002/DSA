/*
Write a C function that takes a positive integer n as parameter and then prints the following
pattern
*********
_********
__*******
___******
____*****
_____****
______***
_______**
________*
where n is the number of lines.

*/


#include <stdio.h>


void pattern(int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			printf("_");
		}
		for(int j=n;j>i;j--){
			printf("*");
		}
		printf("\n");
	}

}

int main()
{	int n=10;

	pattern(n);
	return 0;
}