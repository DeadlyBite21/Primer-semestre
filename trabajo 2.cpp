#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    int suma=0;
    cout<<"Ingrese la cantidad de RUTS: "<<endl;
    cin>>n;
    int rut[n];
    int digito[n];
    cout<<"Ahora ingrese los RUTS sin el digito verificador: "<<endl;
    for(int i=0;i<n;i++){
        cin>>rut[i];
    }
    cout<<"Ahora ingrese los digitos verificadores de los RUTS escritos anteriormente: "<<endl;
    for(int i=0;i<n;i++){
        cin>>digito[i];
    }
    
    return 0;
}