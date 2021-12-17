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
}//ako baravme vo odreden opseg reverse trebase vo ramiki na for ciklus da se reinicijalizira na 0 otpocetok znaci vo for povtorno reverse=0
/*
1234
c=n%10;//4
rev=10*rev+c;//4
n/=10;//ja zemame taa cifra
od 123 zemame n%10 => 3
rev=10*0+3=>3
n/=10;//ja zemame 3kata ...itn

*/
