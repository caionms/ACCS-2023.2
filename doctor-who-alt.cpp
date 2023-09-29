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
    
    cin >> M;
    
    for(int i=0;i<M;i++){
        inimigo novoInimigo;
        cin >> novoInimigo.tipo >> novoInimigo.forca;
        inimigos.push_back(novoInimigo);
    }
    
    cin >> N;
    
    int vecSize = inimigos.size();
    
    while (!inimigos.empty()) {
        if((N < inimigos.back().forca) || (N == 0))
            break;
        N -= inimigos.back().forca;
        inimigos.pop_back();
    }
    
    if(inimigos.empty())
        cout << "Consegui derrotar todos!";
    else {
        int daleks = 0, cybermen = 0;
        vecSize = inimigos.size();
        for(int i=0;i<vecSize;i++){
            if(inimigos[i].tipo == "Dalek")
                daleks++;
            else
                cybermen++;
        }
        cout << "Consegui derrotar " << daleks << " daleks e " << cybermen << " cyberman." << endl << "Preciso de ajuda!";
    }

    return 0;
}