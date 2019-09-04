#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
    int cantidad;
    float dato, desviacion;
    float suma = 0,cuadrados = 0;
    cout<<"N: ";
    cin>>cantidad;
    for(int i = 0;i<cantidad;i++){
        cout<<"x"<<i+1<<": ";
        cin>>dato;
        suma = suma + dato;
        cuadrados = cuadrados + pow(dato,2);
    }
    desviacion = sqrt(cuadrados/cantidad - pow(suma/cantidad,2));
    cout << fixed <<setprecision(2)<< desviacion<<"\n";
    
    return 0;
}
