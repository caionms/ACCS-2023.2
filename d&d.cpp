#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>

using namespace std;

struct personagem{  
    string nome; 
    int carisma;
    int inteligencia;
}; 

bool compare_carisma(personagem a, personagem b){
    if (a.carisma != b.carisma) {
        return a.carisma < b.carisma;
    }
    else {
        return a.inteligencia < b.inteligencia;
    }
}

bool compare_inteligencia(personagem a, personagem b){
    if (a.inteligencia != b.inteligencia) {
        return a.inteligencia < b.inteligencia;
    }
    else {
        return a.carisma < b.carisma;
    }
}

int main()
{
    char X;
    string nome;
    int N;
    
    vector<personagem> party;
    
    cin >> X;
    
    cin >> N;
    
    for (int i=0;i<N;i++) {
        personagem novoPersonagem;
        cin >> novoPersonagem.nome;
        cin >> novoPersonagem.inteligencia;
        cin >> novoPersonagem.carisma;
        party.push_back(novoPersonagem);
    }
    
    if (X == 'C')
        sort(party.begin(), party.end(), compare_carisma);
    else
        sort(party.begin(), party.end(), compare_inteligencia);
    
    int vecSize = party.size();
    
    for(int i=0;i<vecSize;i++) {
        cout << party[i].nome << endl;
    }

    return 0;
}