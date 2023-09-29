#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N, X, P;

    struct candidato{  
        string nome_completo; 
        int idade;
        int experiencia;
        int expectativa_salarial;
    };       
    
    vector<candidato> candidatos;

    cin >> N;
    
    for(int i=0;i<N;i++){
        candidato novoCandidato;
        cin.ignore();
        getline(cin, novoCandidato.nome_completo);
        cin >> novoCandidato.idade >> novoCandidato.experiencia >> novoCandidato.expectativa_salarial;
        candidatos.push_back(novoCandidato);
    }
    
    cin >> X >> P;
    
    candidato melhorCandidato;
    melhorCandidato.experiencia = -1;
    melhorCandidato.expectativa_salarial = -1;
    melhorCandidato.idade = 18;
    
    int vecSize = candidatos.size();

    for(int i=0;i<vecSize;i++) {
        if((candidatos[i].idade >= 18) && (candidatos[i].expectativa_salarial <= P) 
          && (candidatos[i].experiencia >= X)) {
            if(candidatos[i].experiencia > melhorCandidato.experiencia){
                melhorCandidato = candidatos[i];
            }
            else if((candidatos[i].experiencia == melhorCandidato.experiencia) 
              && (candidatos[i].expectativa_salarial < melhorCandidato.expectativa_salarial))
                melhorCandidato = candidatos[i];
        }
    }
    
    if(melhorCandidato.experiencia == -1)
        cout << "Nenhum candidato foi selecionado";
    else
        cout << melhorCandidato.nome_completo << " foi selecionado";
    
    return 0;
}