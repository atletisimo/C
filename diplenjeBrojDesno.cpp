#include<stdio.h>
#include<math.h>
int main(){
	//sekoja cifra od leva polovina na br.se dodava na soodvetna sprotivna cifra
	//od desna polovina na br(i se otstranuva br)-prvata se dodava na poslednata,vtorata na pretposlednata itn
	//Sobiranjeto na cifrite se pravi %10 t.s pri sobiranje na 2 cifri dokolku se dobie br pogolem od 9 se odzema sao cifrata na ednicite
	//Dokolku br ima nepraren br cifri sredisnata se dodava sama na sebe i ne se otstranuva(stanuva prva)
	
	int number,i;
	int digit=0;//broj na cifri

	scanf("%d",&number);
		int tmp=number;
		int newNumber=0;
		int coef=1;//ovoj koef e mnozenje,za pozicija na cifri t.e 10ki,100ki itn
while(tmp>0){//cifra po cifra se dodeka br e pogolem od 0
	++digit;//pri sekoja iteracija dodavame broj na broevi
	tmp/=10;//i otstranuvame po 1 cifra od samiot broj
}	
//koga zastanuvame?
//se dodeka ne stigneme do 0 t.e koga ke snema cifri
	tmp=number;
	while(tmp>0){
	int lastDigit=tmp%10;
	int firstDigit=tmp/(int)pow(10,digit-1);	
		//pow kako f-ja vrakja float zatoa vo int treba da ja kastirame
		int newDigit=(firstDigit+lastDigit)%10;
		newDigit=newNumber+newDigit*coef;
		tmp%=(int) pow(10,digit-1);//gi zemame site osven poslednata cifra,brisenje na prva cifra
		tmp/=10;//brisenje na vtora cifra
		coef*=10;//bidejki slednata cifra ke se naogja na pozicija na 100ki,1000 ki itn
		digit-=2;//bidejki izbrisavme 2 cifri briseme 2 cifri
		
	}
	printf("%d",newNumber);
}
