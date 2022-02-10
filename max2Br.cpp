#include<stdio.h>
int main(){
	int m1,m2;
	int num;
	
	scanf("%d",&num);//prviot broj
	m1=m2=num;//5
	scanf("%d",num);//vtoriot broj=6
	if(num>m1){//dali 6>5
		m2=m1;//togas m2=5
		m1=num;//m1=6
	}
	else{
		m2=num;//znaci pomal e i treba da e vo vtora kutija
	}
	
	while(scanf("%d",&num)){
		//go citame br se dodeka ne vneseme znak
	if(num>m1){//ako br e pogolem od prviot najgolem
		m2=m1;//
		m1=num;//
	}
	else{//ako ne e pogolem od prviot najgolem
		if(num>m2){// proveruvame dali e pogolem od m2
			m2=num;//ako e pogolem od m2 vo m2 go stavame
		}
	}
}}
	
	
	
	}
	
	
	
}
