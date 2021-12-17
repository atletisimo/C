#include<stdio.h>
int isPrime(int number){
if(divisor==number)//sakame i number -1 da go proverime	

return 1;
}else{
	if(number%divisor==0){
		return 0;
	}else{
		//povik na rekurzivnata f-ja
		return isPrime(number,divisor+1);
	}
}
int findNextPrime(int number){
	if(isPrime(number,2))
	return number;
	else
	return findNextPrime(number+1);
	
}

int main(){
	printf("%d",isPrime)
}
