#include<stdio.h>
int main(){
	int max1,max2,num;
	if(scanf("%d%d",&max1,&max2)==2){//dokolku uspesno sme vcitale 2 broja
	
	if(max2>max1){
		int tmp=max2;
		max2=max1;
		max1=tmp;
	}
	while(scanf("%d",&num)){//se dodeka vnesuvame brojka t.e se dodeka ne vneseme nesto drugo osven broj,ke ja pravi proverkata
		if(num>max1){
			max2=max1;
			max1=num;
		}
		else{
			if(num>max2){
				max2=num;
			}
		}
	}
	printf("Max1:%d Max2:%d",max1,max2);
}}
