#include<stdio.h>
#include<string.h>
#include<ctype.h>
int condition(char *word){//pokazuvac kon word
	//zemame karakter po karakter za da proverime dali banana ima poveke od 2 bukvi pr:za b za a za n... itn 
	int i,j;
	//vgnezdeni ciklusi 
	for(i=0;i<strlen(word);i++){
		for(j=0;j<strlen(word);j++){
			//da se ignorira goleminata na bukvi znaci ke gi stavime da se mali ili golemit.e
//tolower() ili toupper()
if(tolower(word[i])==tolower(word[j]))//od leva i od desna ja sporeduvame goleminata na bukvite
++counter;
		}
		if (counter>2)
		return 1;
	}
	return 0;
}





int main(){
//red po red=sekoj zbor e vo nov red
//ne interesira sekoj red
FILE *f=fopen("zborovi.txt","r");
char word[100];
while(fgets(word,100,f)!=NULL){
	if(condition(word)){
	//hasMorethan2Letters=e uslovot	
	puts(word);//puts stava visok enter
	//zatoa mozeme 
	++counter;
	}
}	
	
	printf("Vkupno %d zborovi",counter);
	

fclose(f);	
	
}
