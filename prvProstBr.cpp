#include<stdio.h>
int isPrime(int number){
	int i;
	for(i=2;i<number;i++){
		if(number%i==0){//ako sme nasle deliteli znaci brojot ne e prost
		return 0;
			
		}
	}
	return 1;
}

int main(){
	int i,n;
	scanf("%d",&n);
	for(i=n+1;;i++){
		if(isPrime(i)){
			printf("%d",i-n);
			break;
		}
	}
}
