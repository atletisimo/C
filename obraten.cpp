#include<stdio.h>
int main(){
	int n,reverse=0;
	scanf("%d",&n);
	while(n){
		int lastDigit=n%10;
		reverse=10*reverse+lastDigit;
		n/=10;
	}
	
}
