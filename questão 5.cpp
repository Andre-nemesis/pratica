#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h> 
#define ArmValor 10

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int AV[ArmValor],va_us,i,indice = 0;
	
	printf("Criando os n�mero do Sorteio...\n\n");
	
	srand(time(NULL));
	
	for(i = 0;i<ArmValor;i++) {
		AV[i] = rand() % 100;
	//	printf("%d\t",AV[i]);
	}
	
	printf("\nDigite um n�mero para ver se voc� ser� sorteado: ");
	scanf("%d",&va_us);
	
	system("cls");
	
	for (i = 0; i < ArmValor;i++) {
		if(va_us == AV[i]) {
			printf("Voc� foi sorteado!\n\nSeu n�mero %d\nIndice no Vetor %d",va_us,i);
			indice = 1;
			break;
		}

	}
	
	if (!indice) {
        printf("O numero %d nao esta no vetor.\n",va_us);
    }
	
	return 0;
}
