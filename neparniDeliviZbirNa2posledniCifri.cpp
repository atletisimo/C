#include<stdio.h>
int main(){
	int n,m,i;
	scanf("%d%d",&m,&n);
	for(i=m+1;i<n;i++){
		if(i%2!=0){
			int sumLastDigits=i%10+i/10%10;
		if(i%sumLastDigits==0){
			printf("%d\n",i);
		}	
		}}
	}

