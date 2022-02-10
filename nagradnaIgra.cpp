#include<stdio.h>
int main(){
	int type;//1 ili2
	int num,n;
	scanf("%d",&type);
	if(type==1){
	scanf("%d",&num);
	//proverka da e 6 cifren
	if(num>=100000&&num<1000000){
	
	if(num%7==0){
		printf("DA");
		}else{
			printf("NE %d",num%7);//brojot go pecati
		}
	} else{
		printf("NE");
	}
	
	}else{
		int sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&num);
			sum+=num;
			
		}
		if(sum%7==0){
			printf("DA");
		}else{
			printf("NE %d",sum%7);
		}
		
	}
	
	
	
		
}
