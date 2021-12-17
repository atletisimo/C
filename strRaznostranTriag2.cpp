#include<stdio.h>
int a=5;
float b=7.5;
float c=10.2;
float L=a+b+c;
printf("Perimetarot na triagolnikot e %.2f",a+b+c);
float s=L/2;
//kvadratot od plostinata se bara za da ne presmetuvame koren
float P=s*(s-a)*(s-c);
printf("Plostina na raznostran triagolnik e %.2f");//heronova formula
