//fomratirano citanje bidejki citame brojki i bukvi
#include<stdio.h>
#include<string.h>
int main(){
	FILE *input=fopen("vlezna.txt","r");
	FILE *output=fopen("izlezna.txt","w");
	
	char currline[100];
	//so fgets kade ke se zacuva rezz,i max broj znaci i od kade citame 
	while(fgets(currLine,100,input)!=NULL){
		
int strLen=strlen(currline);//dolzina na momentalna linija
//vo koj file ke zapisuva
fprint(output,"%d\n",strLen);//vo ovoj file zapisuvame
fprintf(output,"%s",currline);//vo ovoj file zapisuvame 		
	}
	fclose(input);
	fclose(output);
}
