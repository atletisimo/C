#include<stdio.h>
int main(){
int type;
int number;
int i,n;

scanf("%d",&type);//1 ili 2

if(type==1){
scanf("%d",&number);
if(number%7==0){
	printf("DA");
}	
else{
	printf("NE %d",number%7);
}
}	
else{
	int sum=0;
	scanf("%d",&n);//sumata na br dali e deliva so 7
	for(i=0;i<n;i++){
		scanf("%d",&number);
sum+=number;
	}
	if(sum%7==0){
		printf("DA");
	}
	else{
		printf("NE %d",sum%7);
	}
}


	
	}
