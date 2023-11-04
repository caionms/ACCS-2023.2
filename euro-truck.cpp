#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int dt, vm, tl;

    cin >> dt >> vm >> tl;

    int tempo_necessario = dt / vm;
    
    if (tempo_necessario <= tl) {
        cout << "Entrega dentro do prazo!" << endl;
    } else { 
        cout << "Entrega fora do prazo!" << endl;
    }

    return 0;
}