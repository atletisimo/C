#include<stdio.h>
int main(){
	int x=5;
	int y=5;

	if(y-- ==x){//5
			printf("%d",y);//4
		printf("%d",y--);//4
		printf("%d",y);//3
		
	}
	else {
	y=x>7;
}
printf("%d%d",x,y);//5 3
}
