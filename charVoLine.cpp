#include<stdio.h>
#include<string.h>
int countOccurances(char *line,char c){
	int counter=0;
	while(*line!='\0'){
	if(*line==c){
		++counter;
	}	
	line++;
	}
	return counter;
}

int main(){
	char line[100];//linija
	char character;
	gets(line);//ja citame linijata
	scanf("%c",&character);
	
	//da ispecatime kolku pati karakterot se pojavil
	//vo linijata
	printf("%d",countOccurances(line,character));
	
	
	
	
}
