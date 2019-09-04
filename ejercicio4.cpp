#include <iostream>

using namespace std;

void Menu(){
	cout<<"tipo de entrada"<<"\n";
	cout<<"1. Super Vip		precio 212"<<"\n";
	cout<<"2. Vip			precio 170"<<"\n";
	cout<<"3. Preferencial  	precio 136"<<"\n";
	cout<<"4. General		precio 59"<<"\n";
}

float calcularPrecio(int tipo, char cliente){
	float precio;
	switch(tipo){
		case 1: precio = 212;
				break;
		case 2: precio = 170;
				break;
		case 3: precio = 136;
				break;
		case 4: precio = 59;
				break;
	}
	if (cliente == 'S'||cliente=='s'){
		precio = precio - precio*0.2;
	}
	return precio;
}

int main() {
	int tipo;
	char cliente;
	float precio;
	 
	do{
		Menu();
		cout<<"Seleccione el tipo de entrada: ";
		cin>>tipo;
	}while(tipo<0 || tipo>4);
	
	do{
		cout<<"Es cliente claro <S, s, N, n >: ";
		cin >> cliente;
	}while(cliente != 'S' && cliente != 's' && cliente != 'N' && cliente != 'n');
	
	precio = calcularPrecio(tipo,cliente);
	cout <<"Monto a pagar "<<precio<<"\n";
    return 0;
}
