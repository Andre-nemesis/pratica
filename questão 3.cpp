#include <stdio.h>
#include <locale.h>
#define pa 10

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int vi,r,Pa[pa],i;
	
	printf("Calculádora de termos de uma P.A\n");
	printf("Digite um valor para iniciar a P.A: ");
	scanf("%d",&vi);
	printf("Agora digite um valor para a razão da P.A: ");
	scanf("%d",&r);
	
	for(i=0;i<pa;i++) {
		Pa[i] = vi + (r * i);
		printf("Valor da P.A: %d\nIndice: %d\n",Pa[i],i);
	}
	
	
	
	return 0;
}
