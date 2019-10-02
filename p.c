#include <stdio.h>

int main() {

int n, linha, coluna;
	
	printf("Digite o numero de linhas:\n");
	scanf("%d", &n);
	
	for(linha = 1; linha <= n; linha++) {

		for(coluna = 1; coluna <= (2*n)-1; coluna++) {

			if(coluna >= n-(linha-1) && coluna <= n+(linha-1)){
				printf("*");				
			} 
			else {					
				printf(" ");
			}
		} 
		printf("\n");
	}
	
return 0;
}