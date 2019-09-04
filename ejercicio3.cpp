#include <iostream>

using namespace std;

int main() {
	float numero,max=0;
	int n;
	cout<<"N: ";
	cin>>n;
	for (int i=0; i<n; i++){
		cout<< "ingrese numero "<<i+1<<": ";
		cin>>numero;
		if (max<numero){
			max=numero;
		}
	}
	cout << "El valor maximo es: "<<max<<"\n";
    return 0;
}
