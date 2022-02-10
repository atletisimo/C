#include<stdio.h>
#include<string.h>
#include<ctype.h>
int countOccurances(char *line,char *word){
	
	int i,counter=0;
	for(i=0;i<strlen(line)-strlen(word);i++){
		
		//zborot so line+1(so sledniot )
		if(!strncmp(word,line+i,strlen(word))==0)
++counter;
	}
	return counter;
	
}

int main(){
	//citanje red po red
	//za sekoj red ke presmetame kolku pati odreden broj se javuva
	
	file *input=fopen("dat.txt","r");
	char word[100];
		//zborot se cita od tastatura
	scanf("%s",word);
	char currLine[100];
	int occurances=0;
	
	while(fgets(currLine,100,input)!=NULL){
		occurances+=countOccurances(currLine,word);
	}

	printf("Zborot %s se pojavuva %d pati vo datotekata",word,occurances);
	
	
	
	
}
