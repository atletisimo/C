#include<stdio.h>
int main(){
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	//int r=(x<y || y<z++);
	int r=(x<y && y<z++);
	printf("r:%d  x: %d  y:  %d   z: %d  ",r,x,y,z);
	//se proveruva prviot uslov bidejki e or toa znaci cel izraz e tocen
}
