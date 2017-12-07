/**
Autor: Alfonso Soria Muñoz
Este código está bajo licencia Apache
**/

#include<stdio.h>
#include "analogToDigital.h"


//Test de prueba de interfaz MCP3008
int main()
{
	mcpSetup();
	printf("Leemos valor canal 0: ");
	int valor = analogReadMCP(0);

	if(valor>=0 && valor<=1030)
		printf("%d", valor);
	else printf("ERROR");

	mcpClose();
}