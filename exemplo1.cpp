#include <stdio.h>
#include <locale.h>



int main () {
	//int idade, numero;
	//float peso, altura;
	//char letra, inicial;
	float salAtual, saldoAReceber;
	float porcFGTS;
	
	porcFGTS = 8;
	
	//Ajusta idioma do software
	setlocale( LC_ALL, "Portuguese" );
	//>Exemplo de cálculo de FGTS
	//ENTRADA
	printf( "*******************" );
	printf( "**Cálculo de FGTS**" );
	printf( "*******************" );
	printf( "\n" );
	printf( "\n" );
	//CALC SALDO
	printf( "Digite o salário atual: " );
	scanf( "%f", &salAtual );
	saldoAReceber = salAtual * porcFGTS /100;
	// print
	printf( "Fundo a receber é de %f.", saldoAReceber );
		
}

