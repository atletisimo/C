#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i;
int sumEven=0,sumOdd=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d",n);
	if(i%2==0){//ako pozicijata e parna
	sumEven+=n;
		
	}
	else{
		sumOdd+=n;
	}
}
if(abs(sumEven-sumOdd)>10){
	printf("Sumite mn.se razlikuvaat");
}
else{
	printf("Sumite se razlikuvaat");
}	
}
