#include<stdio.h>
int main(){
	int first,second;
	int tmp1,tmp2;
	scanf("%d%d",&first,&second);
	int tmp2=second;
	int tmp1=first;
	while(tmp1>0){
		int digit=tmp1%10;
		int found=0;//ova e flag za sekoja cifra found e na 0 zatoa mora
		//vo ciklusov da se stavi na 0
		//so vgnezden while za 2 broj
		tmp2=second;
		while(tmp2>0){
			int digit2=tmp2%10;
			if(digit==digit2){
				found=1;
				break;
			}
			tmp2/=10;
		}
		if(found==0){
			printf("NE");
			break;
		}
		tmp1/=10;
	}
	printf("DA");
}
