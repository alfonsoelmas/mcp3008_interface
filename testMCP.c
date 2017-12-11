/**
Autor: Alfonso Soria Muñoz
Este código está bajo licencia Apache
**/

#include<stdio.h>
#include "analogToDigital.h"


//Test de prueba de interfaz MCP3008
int main()
{
wiringPiSetup();
mcpSetup();
	
	int i, valor;
	while(valor<1000){
		for(i=0; i<1; i++)
		{
			printf("Canal %d: ",i);
			valor = analogReadMCP(i);
	
			if(valor>=0 && valor<=1030)
				printf("%d\n ", valor);
			else printf("ERROR");
			
		}
		delay(300);
		system("clear");
	}
/*
	while(1){
		wiringPiSetup();
		mcpSetup();
		printf("Valor: %d\n",analogReadMCP(2));
		delay(100);
		system("clear");
		mcpClose();
	}
*/

mcpClose();

}
