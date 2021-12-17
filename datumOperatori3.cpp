#include<stdio.h>
int main(){
	int date;
	scanf("%d",date);
	//25111996
	//prvo godinata da ja dobieme
	int year=date%10000;
	//levite 4 ri cifri ke gi stavime vo promenliva
	int ddmm=date/10000;
	int day=ddmm/100;
	int month=ddmm%100;
	printf("%0d.%0d.0%d",day,month,year);
}
