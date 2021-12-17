#include<stdio.h>
int main(){
	//DDV
	//18% na cenata i dodavame =>cena*(18/100)
	int price;
	scanf("%d",&price);//price*0.18
	float tax=price*0.18;
	int priceWithTax=price+tax;
	printf("%d%f%d",price,tax,priceWithTax);
	
}
