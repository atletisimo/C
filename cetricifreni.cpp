#include<stdio.h>
int main(){
	int i,sum=0,digit_first;
	int temp;
	int digit;
	for(i=1000;i<=9999;i++){
		digit_first=i/1000;//prvata cifra
		temp=i%1000;//gi zemame poslednite 3 cifri
		while(temp>0){//se dodeka ima cifri zemaj 1 po edna
		
		digit=temp%10;//zemaj edna po edna dodeka vazi while ciklusot
		sum+=digit;
		temp/=10;
		
	}
	if(sum==digit_first)
		printf("%d",i);
		
}}
