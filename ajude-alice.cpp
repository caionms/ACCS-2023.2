#include <iostream>
#include <cmath>

using namespace std;


# Dependendo da conversão, ou passa o primeiro exemplo, ou passa o segundo
int main()
{
    double A, B, aux;
    int A_segundos, B_segundos, resul_minutos, resul_segundos;
    
    cin >> A >> B;
    
    aux = A - floor(A);
    
    A_segundos = int(aux * 100);
    
    //cout << "(" << B << " - " << floor(B) << ")*60" << endl; 
    
    aux = B - floor(B);
    
    //cout << aux*100 << endl;
    
    B_segundos = int(aux * 100);
    
    //cout << A_segundos << " + " << floor(A) << " * 60" << endl;
    
    A_segundos += floor(A) * 60;
    
    //cout << B_segundos << " + " << floor(B) << " * 60" << endl;

    B_segundos += floor(B) * 60;
    
    resul_minutos = (A_segundos - B_segundos) / 60;
    
    resul_segundos = (A_segundos - B_segundos) % 60;
    
    cout << resul_minutos << "." << resul_segundos;

    return 0;
}