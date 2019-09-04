#include <iostream>

using namespace std;

float calcularPrecio(char tipo, int personas){
	float precio;
	switch(tipo){
		case 'A': precio = 40.00;
				  if(personas < 8){
					  precio = precio + 7*(personas-8);
				  }
				  break;
		case 'B': precio = 30.00;
				  if(personas > 6){
					  precio = precio + 7*(personas-6);
				  }
				  break;
		case 'C': precio = 20.00;
				  if(personas > 4){
					  precio = precio + 3*(personas-4);
				  }
				  break;
		case 'D': precio = 10.00;
				  if(personas > 2){
					  precio = precio + 3*(personas-2);
				  }
				  break;
	}
	
	return precio;
}

int main() {
	char tipo;
	int personas;
	float precio;
	 
	do{
		cout<<"Tipo de seguro: ";
		cin>>tipo;
		cout << tipo;
	}while(tipo!='A' && tipo!='B' && tipo!='C' && tipo!='D');
	
	do{
		cout<<"Numero de personas aseguradas : ";
		cin >> personas;
	}while(tipo<=0);
	
	precio = calcularPrecio(tipo,personas);
	cout <<"Monto mensual S/. "<<precio<<"\n";
	
    return 0;
}
