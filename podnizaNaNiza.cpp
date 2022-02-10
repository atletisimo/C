#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char line[100];
	char start,length;
	gets(line);//banana
	scanf("%d%d",&start,&length);//3 4
	int i;
	for(i=start-1;i<start+length-1;i++){
	if(i==strlen(line))//line[i]=='\0'
	break;
		printf("%c",line[i]);
	}
}
