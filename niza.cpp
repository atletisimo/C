#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	
	printf("%d",arr[i]);
}
for(i=n-1;i>=0;i--){
		printf("\nDruga niza:%d",arr[i]);
}
for(i=0;i<=n;i++){
	arr[i]=arr[i+1];
	printf("\nprethoden niza %d",arr[i]);
}
}
