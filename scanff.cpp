#include<stdio.h>
int main(){
	int num,max;
	int flag=1;
	//printf("%d",scanf("%d",&num));
//citaj broevi se dodeka ne se vnese nesto so ne e broj so while
while(scanf("%d",&num)){

if(flag){//dignato e znameto
	max=num;//doagja prviot broj
	flag=0;//go supustame znameto
}
if(num>max){
	max=num;
}
}
if(flag){//ako flagot e uste 1

printf("Please enter at least one valid integer\n");
	//ako vneseme nesto nevalidno

}
else {
	
printf("Max e %d:",max);

}
}

