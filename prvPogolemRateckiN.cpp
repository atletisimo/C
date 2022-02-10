#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);//vnesuvame broj
	for(i=n+1;;i++){//pocnuva od sledbvenikot na n
	//zavrsuva kaj break
		//so flag 1 pretpostavuvame deka brojot e rastecki
			flag=1;//ovde flag mora da e 1
			//pred while bidejki za sekoe i treba na novo da proverime dali toj e rastecki br
	int tmp=i;//za da ne ja izgubime vrednosta na i
		while(i>=10){
			int c1=i%10;//poslednata cifra ja zemame
			int c2=i/10%10;//pretposlednata cifra ja zemame
			if(c1<=c2){//dali brojot ne e rastecki t.e poslednata e pomala ili ednakva od pretposlednata cifra
				flag=0;//definitivno ne e rastecki
			break;
			}//ako toa vazi flagot go spustame
			tmp/=10;//ja trgame poslednata cifra
		}//na sekoja iteracija trgame po edna cifra od br
		//posle while utvrduvame dali e rastecki
		if(flag==1){//dali uste vazi pretpostavkata deka brojot e rastecki
			printf("%d",i);//ako se uste vazi ispecati go brojot i zavrsi go ciklusot
			break;
		}
	}
}//n=123 
//i=124
//flag=1
//tmp=124
//c1=4
//c2=2
// na tmp izbrsii mu 4 stanuva 12
//dali 12 e pogolem od 10
//c1=2
//c2=1
//flag=1
//znaci brojot e rastecki

