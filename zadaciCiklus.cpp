#include<stdio.h>
int main(){
	int n;
	int number;
	int r0=0,r1=0,r2=0;
	int i;
	scanf("%d",&n);//go vnesuvame n
	for(i=0;i<n;i++){//do n bez n
		//ako e i=1 togas i<=n;i++
		scanf("%d",&number);
		int r=number%3;
		if(r==0){
			r0++;
		}
		else if(r==1){
			r1++;
		}
		else{
			r2++;
		}
	}
		printf("r0:%d r1:%d r2:%d\n",r0,r1,r2);
		
	
}
