#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char texto [40];
	int vogais = 0;
	int espacos = 0;
	
	printf("Digite um texto com até 40 caracteres: \n");
	gets(texto);
	

	
	for(int i=0; i<=39; i++){
		if(texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' ||texto[i] == 'O' ||texto[i] == 'U' || texto[i] == 'a' || texto[i] == 'e' ||texto[i] == 'i' ||texto[i] == 'o' ||texto[i] == 'u'){
			vogais++;
		}
		if(texto[i] == ' '){
			espacos++;
		}
		
	}
	printf("O TOTAL DE CARACTERES É: %d\n", strlen(texto));
	printf("O TOTAL DE VOGAIS É: %d\n", vogais);
	printf("O TOTAL DE ESPAÇOS É: %d", espacos);
}
