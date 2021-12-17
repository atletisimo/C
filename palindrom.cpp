#include<stdio.h>
int main(){
	int num;
	
	scanf("%d",&num);
	int tmp=num;
	int reverse=0;
	while(tmp!=0){
		int c=tmp%10;
		reverse=10*reverse+c;
		tmp/=10;
	}
	printf("%d%d",num,reverse);
}
