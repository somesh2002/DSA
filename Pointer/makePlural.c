
/*
Write a function that takes as input a name of a plant and returns it plural (add s to get
the plural)
*/

#include <stdio.h>
#include<stdlib.h>
 void plural(char *name){
 	int length=0,i;
 	for(length=0;*(name+length)!='\0';length++);
 	char *plural=(char *)malloc((length+2)*sizeof(char)); 
 	
 	for(i=0;i<length;i++){
 		*(plural+i)=*(name+i);
 	}

 	*(plural+length)='s';
 	*(plural+length+1)='\0';
 	printf("length : %d \n",length);
 	printf("Plural String :- %s\n",plural);
 	free(plural);
 }

 int main(){

 	char name[]="pen";
 	plural(name);
 	return 0;
 }