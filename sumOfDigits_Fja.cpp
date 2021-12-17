#include<stdio.h>
int sumOfDigits(int number){
	int sum=0;
	while(number)//se dodeka brojot ne dojde do 0
	{
		sum+=number%10;
		number/=10;
	}
return sum;
}
void printNumber(int n){
	printf("%d\n",n);
}
int main(){
int n;
scanf("%d",&n);
//printf("%d%d",sumOfDigits(n),n);
printNumber(sumOfDigits(n));
printNumber(n);	
}
