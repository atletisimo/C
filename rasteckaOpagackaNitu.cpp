#include<stdio.h>
int main(){
	int arr[100];
	int n,i;
	int rastecka=1,opagacka=1;
	scanf("%d",&n);//golemina na niza
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);//vcituvame niza so golemina n
		
	}
	for(i=0;i<n-1;i++){
		if(arr[i]>=arr[i+1]){
		
		rastecka=0;
	}
	if(rastecka){
		printf("Rastecka");
	}
	else if(opagacka){
		printf("Opagjacka")
	}
	else{
		printf("Nitu rastecka nitu opagjacka");
	}
	}
}

