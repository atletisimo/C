#include<stdio.h>
#include<string.h>
#include<ctype.h>
int isVowel(char c){
	c=toLower(c);
	return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
int main(){
	//znak po znak treba da procitame
	//treba da izborime karakteri znaci tipicen primer za citanje znak po znak
//otvaranje datoteka
FILE *f=fopen("datoteka.txt","r");
	char curr;
	int vowels=0,consonants=0;
	//so while citame
	while((curr=fgetc(f))!=EOF){
		//da proverime dali se bukvi
		if(isalpha(curr)){
		if(isVowel(curr)){
			vowels++;
		}	else{
			consonants++;
		}
		}
	}
	
	fclose(f);
	printf("Odnos na soglaski samoglaski=%.2f",consonants,vowels,(float) vowels/consonants);
	
	
	
	
}
