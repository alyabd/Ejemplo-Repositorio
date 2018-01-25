//Proyecto Final: Estacionamiento
//Alan Yadir Blancarte Dondiego
#include <stdio.h>
#include <stdlib.h>

struct vehiculo_datos{
	char modelo[15];
	char placas[10];
	int ocupado;	
}vehiculo[5];

int main()
{
	int opcion,i,o,rcase1,d=5;
	char respuesta;
	do{
	system("cls");
	printf("\n***ESTACIONAMIENTO MERCADO***");
	printf("\n Elige la accion a realizar: ");
	printf("\n 1. Entrada de vehiculo.");
	printf("\n 2. Consulta de datos");
	printf("\n 3. Lugares ocupados y disponibles.");
	printf("\n 4. Salir.");
	printf("\n\n Seleccionar: ");
	scanf("%d",&opcion);
	switch (opcion)
	{
		case 1:
			for(i=1;i<=5;i++)
			{
			system("cls");
			fflush(stdin);
			printf("***ENTRADA DE VEHICULO***");
			printf("\n Ingresa los datos del vehículo.");
			printf("\n -> MODELO: ");
			gets(vehiculo[i].modelo);
			printf("\n -> PLACAS: ");
			gets(vehiculo[i].placas);
			printf("\n\n LISTO, VEHICULO AGREGADO CORRECTAMENTE EN EL LUGAR %d.",i);
			d--;
			getchar();
			}
			printf("\nESTACIONAMIENTO LLENO");
			break;
		
		case 2:
			system("cls");
			printf("***CONSULTA DE DATOS***");
			printf("\n Ingrese el lugar donde esta el vehiculo: ");
			scanf("%d",&i);
			printf("\n Datos del vehiculo:");
			printf("\n -> MODELO: %s",vehiculo[i].modelo);
			printf("\n -> PLACAS: %s",vehiculo[i].placas);
			break;
		
		case 3: //Lugares ocupados y disponibles
			system("cls");
			printf("***LUGARES DISPONIBLES***");
			printf("\n Espacios totales: 5");
			printf("\n Espacios libres: %d",d);
			break;
		
		case 4:
			return 0;
			
			
	}
	printf("\n\n Presiona 1 para volver al menú principal\n\t");
	scanf("%d",&respuesta);
	}while (respuesta==1);
return 0;
}




