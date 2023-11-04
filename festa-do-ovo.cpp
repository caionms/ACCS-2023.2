#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>

using namespace std;

struct competidor{  
    string nome; 
    int ovos_comidos;
}; 

bool compare(competidor a, competidor b){
    if (a.ovos_comidos != b.ovos_comidos) {
        return a.ovos_comidos > b.ovos_comidos;
    }
    else {
        return a.nome < b.nome;
    }
}

int main()
{
    int X;
    string S;
    
    vector<competidor> competidores;
    
    cin >> X;
    
    for(int i=0;i<X;i++) {
        competidor novoCompetidor;
        cin.ignore();
        getline(cin, novoCompetidor.nome);
        novoCompetidor.ovos_comidos = 0;
        cin >> S;
        for(int j=0;j<S.length();j++) {
            novoCompetidor.ovos_comidos += S[j] - '0';
        }
        competidores.push_back(novoCompetidor);
    }
    
    sort(competidores.begin(), competidores.end(), compare);
    
    int vecSize = competidores.size();
    
    for(int i=0;i<vecSize;i++) {
        cout << competidores[i].nome << " " << competidores[i].ovos_comidos << endl;
    }

    return 0;
}