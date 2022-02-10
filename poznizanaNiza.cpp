#include<stdio.h>
#include<string.h>
int contains( char *str1,char *str2){
int i,j;

	int l1=strlen(str1);
	int l2=strlen(str2);;//dokolku taa sto ja proveruvame za poddniza
	//e pogolema od l1 togas vrakja nula nema sansi da e pogolemata poddniza na pomalata
	if(l2>l1)
	return 0;
	
	
	for(i=0;i<=l1-l2;i++){
		if(str1[i]==str2[0]){//so prvata bukva ako e ednakva
			int flag=1;//pretpostavuvame deka se sodrzi
			//proveruvame dali se sodrzi so brojac j
			for(j=0;j<l2;j++){
				//dokolku jtata bukva e razlicna go spustame flagot
				if(str2[j]!=str1[i+j]){
					flag=0;
					break;
				}
			}
		}if(flag)
		return 1;
		
	}}
	
	
}
int main(){
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	if(contains(s1,s2)){
		printf("YES");
		
	}
else{
	printf("NE");
}
}
