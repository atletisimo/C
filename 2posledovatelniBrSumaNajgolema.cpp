#include<stdio.h>
int main(){
int prev,curr,max_sum,max_position;	
int max;
int position;
scanf("%d%d",&prev,&curr);
if(prev<0 && curr < 0){
	return 0;//break nemoze da se koristi posto ne e ciklus
}
position=2;//bidejki vcitavme 2 broja
max_sum=prev+curr;
max_position=position;
//znaci sea counterot ke pocnuva od 3
for(position=3;prev>0 || curr>0;position++){
	prev=curr;//go zapisuvame momentalniot vo prev,a
	//current na novo go vcituvame
	scanf("%d",&curr);
	int sum=prev+curr;
	if(sum>max>sum){
		max_sum=sum;
		max_position=position;
		
	}
}
printf("%d\n%d\n%d",max_sum,max_position-1,max_position);
}
