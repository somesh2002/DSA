//Write a function that takes as input two integers and returns its greatest common divisor

#include <stdio.h>

//implementing euclid's algorithm
int gcd(int a, int b){
	int max, min,remainder;
	if(a>=b){
		max=a;
		min=b;
	}
	else{
		max=b;
		min=a;
	}

	remainder=max%min;
	while(remainder!=0){
		max=min;
		min=remainder;
		remainder=max%min;
	}
	return min;
}

int main()
{	int a=gcd(10,15);
	printf("\t%d",a);
	return 0;
}