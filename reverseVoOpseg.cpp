#include<stdio.h>
int main(){
	int i,start,end,tmp;
			int reverse;
	scanf("%d%d",&start,&end);
	for(i=start;i<=end;i++){
		tmp=i;
		reverse=0;//mora da se reinicijalizira deka za sekoj broj treba da presmetuva
		while(tmp!=0){
			int c=tmp%10;
			reverse=10*reverse+c;		
tmp/=10;}
		if(i==reverse){
			printf("%d e palindrom\n",i);
		}
	}}

