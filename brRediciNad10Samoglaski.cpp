#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isVowel(char c){
	c=toLower(c);
	return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
int calculateVowels(char *line){
	int vowels=0;
	int i;
	//ja pominuvame celata linija
	//znak po znak
	for(i=0;i<strlen(line);i++){
		if(isVowel(line[i])){
			vowels++;
		}
	}
	return vowels;
}
int main(){
	//citame red po red princip
	FILE *input("primer.txt","r");
	char currLine[100];
	int lines=0;//kolku liniii imaat povekje od 10 samoglaski
	int totalVowels=0;
	while(fgets(currLine,100,input)!=NULL){
		int vowels=calculateVowels(currLine);
		totalVowels+=vowels;
		if(vowels>10){
		lines++;
		}
	}
	printf("Vkupno %d reda imaat povekje od samoglaski.\n""Vo datotekata ima vkupno %d samoglaski",lines,totalVowels);
	
	
	
	fclose(input);
	
	
	
	
	
}
