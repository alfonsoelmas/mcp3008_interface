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

	int i;
	for(i=0; i<8; i++)
	{
		printf("Canal %d: ",i);
		int valor = analogReadMCP(i);

		if(valor>=0 && valor<=1030)
			printf("%d\n ", valor);
		else printf("ERROR");
	}

	mcpClose();
}
