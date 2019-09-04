#include <iostream>
#include <string>

using namespace std;

float calcularPromedio(){
	
	float promedio,P1,P2,P3,P4,PR,E1,E2;
	
	do{
		cout <<"ingrese nota de practica 1: ";
		cin>>P1;
	}while(0>P1 || 20<P1);
	do{
		cout <<"ingrese nota de practica 2: ";
		cin>>P2;
	}while(0>P2 || 20<P2);
	do{
		cout <<"ingrese nota de practica 3: ";
		cin>>P3;
	}while(0>P3 || 20<P3);
	do{
		cout <<"ingrese nota de practica 4: ";
		cin>>P4;
	}while(0>P4 || 20<P4);
	do{
		cout <<"ingrese nota de proyecto: ";
		cin>>PR;
	}while(0>PR || 20<PR);
	do{
		cout <<"ingrese nota de examen 1: ";
		cin>>E1;
	}while(0>E1 || 20<E1);
	do{
		cout <<"ingrese nota de examen 2: ";
		cin>>E2;
	}while(0>E2 || 20<E2);
	
	promedio = 0.05*P1 + 0.1*P2 + 0.1*P3 + 0.15*P4 + 0.2*PR + 0.2*E1 + 0.2*E2;
	
	return promedio;
}

string asignarEvento(float promedio){
	string evento;
	if (20.00>=promedio && 18.00<=promedio){
		evento = "ira al ACM – ICPC International Programming Contest";
	}else if(17.99>=promedio && 15.00<=promedio){
		evento = "ira al Imagine Cup";
	}else if(14.99>=promedio && 12.00<=promedio){
		evento = "ira al Hackathon de Miraflores";
	}else{
		evento = "Necesita mejorar";
	}
	return evento;
}
		
int main() {
	int num_alumnos;
	float promedio;
	string evento;
	do{
		cout<<"Numero de alunos: ";
		cin>>num_alumnos;
	}while(3>num_alumnos || num_alumnos>30);
	for (int i = 0; i<num_alumnos; i++){
		cout << "Alumno numero "<<i+1<<"\n";
		promedio = calcularPromedio();
		evento = asignarEvento(promedio);
		cout<<"\n su promedio es " << promedio<<"\n";
		cout<<"\n UD "<<evento<<"\n"<<"\n";
	}
	
    return 0;
}
