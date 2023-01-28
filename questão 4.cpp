#include <stdio.h>
#include <locale.h>
#define pg 10

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int vi,r,Pg[pg],i;
	
	printf("Calculádora de termos de uma P.G\n\n");
	printf("Digite um valor para iniciar a P.A: ");
	scanf("%d",&vi);
	printf("Agora digite um valor para a razão da P.A: ");
	scanf("%d",&r);
	
	Pg[0] = vi;
	
	for(i=1;i<pg;i++) {
		Pg[i] = Pg[i - 1] * r;
	}
	
	printf("\nTermos da P.G: \n\n");
	for(i = 0;i < pg;i++) {
		printf("Indice %d do Vetor\tSeu Valor %d\n",i,Pg[i]);
	}
	
	return 0;
}
