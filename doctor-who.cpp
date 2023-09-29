#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int M, F, N;
    string tipo;
    
    struct inimigo{  
        string tipo; 
        int forca; 
    };       
    
    vector<inimigo> inimigos;
    vector<inimigo> inimigos_vencidos;
    
    cin >> M;
    
    for(int i=0;i<M;i++){
        inimigo novoInimigo;
        cin >> novoInimigo.tipo >> novoInimigo.forca;
        inimigos.push_back(novoInimigo);
    }
    
    cin >> N;
    
    int vecSize = inimigos.size();
    
    for(int i=0;i<vecSize;i++) {
        if((N < inimigos[i].forca) || (N == 0))
            break;
        N -= inimigos[i].forca;
        inimigos_vencidos.push_back(inimigos[i]);
    }
    
    if(inimigos.size() == inimigos_vencidos.size())
        cout << "Consegui derrotar todos!";
    else {
        int daleks = 0, cybermen = 0;
        vecSize = inimigos_vencidos.size();
        for(int i=0;i<vecSize;i++){
            if(inimigos_vencidos[i].tipo == "Dalek")
                daleks++;
            else if(inimigos_vencidos[i].tipo == "Cyberman")
                cybermen++;
        }
        cout << "Consegui derrotar " << daleks << " daleks e " << cybermen << " cyberman. Preciso de ajuda!";
    }

    return 0;
}