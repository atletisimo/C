#include<stdio.h>
int main(){
	int i;
	for(i=0,printf("A");printf("B"),i<3;i++,printf("C")){
		if(i%2==0){
			continue;
			
		}
		printf("%d",i);
	}}

