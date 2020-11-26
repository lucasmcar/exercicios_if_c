#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Protótipos das funcções
int menor(int valores[], int n);
int maior(int valores[], int n);

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
	//variável que recebe menor valor no array;
	int menV;
	
	for(int i = 0; i < n; i++)
	{
		//se o indíce começar em zero, a variável menV será inicializada com o valor do indíce 0
		if(i == 0)
		{
			menV = valores[0];	
		}
		else if(valores[i] < menV)
		{
			/*A variável menV receberá o valor se o valor 
			*encontrado em determinado indíce, 
			*for menor que o valor armazenado em menV
			*/
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
		//se o indíce começar em zero, a variável maiV será inicializada com o valor do indíce 0
		if(i == 0)
		{
			maiV = valores[0];	
		}
		else if( valores[i] > maiV)
		{
			/*A variável maiV receberá o valor se o valor 
			*encontrado em determinado indíce, 
			*for maior que o valor armazenado em maiV
			*/
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
