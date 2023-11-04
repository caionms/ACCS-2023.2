#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int i, j, k, l, m;
    string nome;
    
    cin >> nome >> i >> j >> k >> l >> m;
    
    if(i >= 12 && j==1 && k==1 && l==1 && m==1){
        cout << nome << ", condicoes ok! Boa sorte na busca pelo tesouro!" << endl;
    } else {
        if(i < 12) {
            cout << "Nao possui idade minima; ";
        } 
        if (j == 0) {
            cout << "Nao possui bussola; ";
        }
        if (k == 0) {
            cout << "Nao possui mapa do tesouro; ";
        }
        if (l == 0) {
            cout << "Nao possui po magico; ";
        }
        if (m == 0) {
            cout << "Nao possui espada magica; ";
        }
        cout << endl << nome << " nao cumpre todas as condicoes!" << endl;
    }

    return 0;
}