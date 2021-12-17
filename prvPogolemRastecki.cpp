#include<stdio.h>
int main(){
	int n,i,flag;
	int tmp;
	//12345
	//ke zimame po 2 cifri znaci sekogas
	//posledna i pretposledna
	// c1=n%10 posledna
	// c2=n/10%10 pretposledna
	//najlesen nacin da pokazime deka nesto vazi za site:
	//e da pokazeme da dokazeme deka ne vazi barem za 1
	//12334 proveruvame 3 i 4 vazi za niv za 3 i 3 ne vazi 2 cifri za koi ne vazi
	//znaci brojot ne e rastecki
	//flag=1 pretposavka deka vazi
	//flag=0 koa ke dojdeme kaj 3 3 i ke go spusti flagot ke ide na naredni br
	scanf("%d",&n);
	for(i=n+1;;i++){
	//pocnuva od sledbenikot na n ne zavrsuva nikogas t.e kaj breakot zavrsuva a go zgolemuva za 1 bidejki treba da gi proveri site broevi pogolemi od n
	flag=1;//mora pred while deka za sekoi mora da proverime
	//pred while bidejki za sekoe i treba na novo da proverime dali e rastecki znaci za sekoe i
	int tmp=i;//za da ne se unisti vrednosta na i
	while(tmp>=10){//se dodeka n e dvocifren koga ke e ednocifren nema so sto da proveruvame nemame 2 cifri
		int c1=tmp%10;
		int c2=tmp/10%10;
		if(c1<=c2){//dali vazi deka brojot ne e rastecki
			flag=0;//ako toa vazi flagot e 0
		break;
		}
		tmp/=10;//na sekoja iteracija trgame po edna cifra od brojot
	}
	if(flag==1){//dali uste vazi pretpostavkata deka brojot e rastecki
		printf("%d",i);//ako vazi ispecati go brojot i zavrsi go ciklusot
		break;
	}
}
	

}
