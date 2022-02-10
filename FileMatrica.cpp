#include<stdio.h>
#include<string.h>
//da gi procita elementite od matricata
//vo prv red broj na redici i koloni e zapisano 
//treba procitanata matrica da se transportira t.e broj na redici i koloni da se zameni
//rezultatot vo matrica2.txt da se zapise
//so formatirano citanje ke ja resime
int main(){
FILE *input=fopen("matrica1.txt","r");
FILE *output=fopen("matrica2.txt","w");
int m,n,i,j;
float matrix[100];
//vcituvame golemini od file-ot
fscanf("input,%d%d",&m,&n);

for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		fscanf(input,%f,matrix[i][j]);//ja citame matricata
		
	}
}
//sega da ja transponirame
//float transporsed[100][100];nema potreba od uste 1 matrica
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		fprint(output,%.1f,matrix[j][j]);
		//obavezno prazen red 

}
fprintf(output,"\n");
fclose(input);
fclose(output);

		
	
	
	
	
}
