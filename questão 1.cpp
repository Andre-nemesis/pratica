#include <stdio.h>
#include <stdio.h>
#define Vaa 10

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int Va[Vaa],maior,menor, maiorIn,menorIn,i;
	
	printf("Digite 10 valores abaixo.\n\n");
	
	
	for(i=0;i<Vaa;i++){
		printf("Digite o %d número.\n",i + 1);
		scanf("%d",&Va[i]);
	}
	
	maior = Va[0];
	menor = Va[0];
	
	for(i = 0;i<Vaa;i++) {
		if(Va[i]>=maior) {
			maior = Va[i];
			maiorIn = i;
		}
		
		if(Va[i]<=menor) {
			menor = Va[i];
			menorIn = i;
		}
	}
	
	printf("O menor número: %d seu indice %d.\nO maior número: %d seu indice %d.\n",menor,menorIn,maior,maiorIn);
	return 0;
}
