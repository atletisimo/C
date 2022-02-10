#include<stdio.h>
int main(){
	float x;
	int n;
	float y=1;//sekogas na 1
	scanf("%f %d",&x,&n);
	
	while(n>0){
		y*=x;
		--n;
	}
	printf("%.2f",y);
}
