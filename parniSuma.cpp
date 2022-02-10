#include<stdio.h>
int main(){
	int sum=0;
	int n=10;
	while(n<=98){
		sum+=n;
		n+=2;
	}
	printf("Sum:%d",sum);
}
