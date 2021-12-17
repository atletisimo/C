#include<stdio.h>
int main(){
    int br;
    int prva,posledna;
    int pretposledna,vtora;
    int sredna;
    scanf("%d",&br);
    prva=br/10000;
    posledna=br%10;
    vtora=br/1000%10;
    pretposledna=br%100%10;
    int vtora_pretposledna=vtora+pretposledna;
    int prva_posledna=prva+posledna;
    sredna=br/100%10;
    printf("%d %d %d",prva_posledna,vtora_pretposledna,sredna);
    
}
