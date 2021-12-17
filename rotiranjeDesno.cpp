#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int tmp=arr[n-1];
	//site elementi od krajot ke pocnat od
	//n-1 se do prviot element prviot ne go cepkame
	for(i=n-1;i>=1;i--){
		arr[i]=arr[i-1];//sekoj od ovie elementi ke ja dobie vredonsta na prethodniot t.e na i-1
	}
arr[0]=tmp;
for(i=0;i<n;i++){
	printf("%d",arr[i]);
}

}
