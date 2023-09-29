#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N, V, E, soma = 0;
    string C;
    
    struct moeda{  
        string cor; 
        int valor; 
    };       
    
    vector<moeda> moedas;

    cin >> N;
    
    for(int i=0;i<N;i++){
        moeda novaMoeda;
        cin >> novaMoeda.cor >> novaMoeda.valor;
        moedas.push_back(novaMoeda);
    }
    
    cin >> E;
    
    int vecSize = moedas.size();
    
    for(int i=0;i<vecSize;i++) {
        if(moedas[i].valor >= E) {
            cout << moedas[i].cor << " " << moedas[i].valor << endl;
            soma += moedas[i].valor;
        }
    }
    
    cout << soma;
    
    return 0;
}