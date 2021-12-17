#include<stdio.h>
int main(){
	int max;
	int n;
	int flag=1;//
	while(scanf("%d",&n)){
		if(flag){//ova e prv element
		max=n;//flag e staven na true,ako e true za prviot elemenit
		//max go stavame na prviot element i znameto go spustame na false t.e 0
		//znaci niednas vekje nema da vleze tuka 
		flag=0;
			
		}
		if(n>max){
			max=n;
		}
	}
printf("%d",max);
}
