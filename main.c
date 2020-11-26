#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valores[4];
	int menor_valor, maior_valor;
	int tam;
	
	for(int i = 0; i < 4; i++)
	{
		printf("Digite um valor: ");
		scanf("%d", &valores[i]);
		/*tam = sizeof(valores) / sizeof(int);*/
		
	}
	
	menor_valor = menor(valores, 4);
	maior_valor = maior(valores, 4);
	
	printf("\nO menor valor é: %d\n", menor_valor);
	printf("\nO maior valor é: %d\n", maior_valor);
	
	system("pause");
	
	return 0;
}

int menor(int valores[], int n)
{
	
	int menV;
	for(int i = 0; i < n; i++)
	{
		if(i == 0)
		{
			menV = valores[0];	
		}
		else if(valores[i] < menV)
		{
			menV = valores[i];
		}
	}
	
	return menV;

	//Encontrando o menor pela recursividade
	/*if(n == 1)
	{
		return valores[0];
	}
	
	int m = menor( valores + 1, n - 1);	

	return (valores[0] < m ) ? valores[0]: m;*/
}
	
int maior(int valores[], int n)
{
	int maiV;
	for(int i = 0; i < n; i++)
	{
		if(i == 0)
		{
			maiV = valores[0];	
		}
		else if( valores[i] > maiV)
		{
			maiV = valores[i];
		}
	}
	
	return maiV;
	
	
	//Encontrando o maior pela recursividade
	/*if(n == 1)
	{
		return valores[0];
	}
	
	int m = maior( valores + 1, n - 1);	

	return (valores[0] > m ) ? valores[0]: m;*/
}
