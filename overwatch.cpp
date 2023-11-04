#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>

using namespace std;

int main()
{
    int N, aux;
    bool sup = false;
    bool tank = false;
    
    cin >> N;
    
    for(int i=0;i<N;i++) {
        cin >> aux;
        if(aux == 1) {
            tank = true;
        } else if (aux == 2) {
            sup = true;
        }
    }
    
    if(tank && sup) {
        cout << "Equipe Balanceada" << endl;
    } else {
        cout << "Equipe Desbalanceada" << endl;
    }
    
    return 0;
}