#include<stdio.h>
/*
vo 1 nagradna igra imate moznost da ucestv.na 2 nacini
6cifren broj nagrada ako e deliv so 7
vtor nacin n broevi i se dobiv nagrada ako nivniot
zbir e deliv so 7
1=>6 cifren
2=>povekje broevi


*/
int main(){
	int type;//1 ili 2
	int num;
	scanf("%d",type);
	if(type==1){//sestcifren br treba da se vnese
	scanf("%d",&num);
	//if(num>=100000&&num<1000000){
	
	if(num%7==0){
		printf("DA");	
	}	
	else{
		printf("NE %d",num);
	}
	
	else{
		printf("NE");
		
	}

else{
	int sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		sum+=num;
	}}
	if(sum%7==0){
		printf("DA");
	}
	else{
		printf("NE %d",sum%7);
	}
}}
