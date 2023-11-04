#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>

using namespace std;

int main()
{
    int N, M;
    string aux;
    
    cin >> N;
    
    for(int i=0;i<N;i++) {
        cin >> M;
        bool empate = false;
        double gaux, aaux, paux, participacoes_vencedor = 0.0;
        string nome_vencedor;
        for(int j=0;j<M;j++) {
            cin >> aux >> gaux >> aaux >> paux;
            double participacoes_atual = (gaux + aaux) / paux;
            if(participacoes_atual > participacoes_vencedor) {
                nome_vencedor = aux;
                participacoes_vencedor = participacoes_atual;
                empate = false;
            } else if (participacoes_atual == participacoes_vencedor) {
                empate = true;
            }
        }
        
        if(empate) { 
            cout << "Houve empate!" << endl;
        } else {
            cout << nome_vencedor << endl;
        }
        
    }
    
    return 0;
}