#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>

using namespace std;

struct aluno{  
    string nome; 
    float media;
}; 

bool compare(aluno a, aluno b){
    if (a.media != b.media) {
        return a.media > b.media;
    } else {
        return a.nome > b.nome;
    }
}

int main()
{
    int X;
    float N1, N2;
    string nome;
    
    vector<aluno> alunos;
    
    cin >> X;
    
    for (int i=0;i<X;i++) {
        aluno novoAluno;
        cin.ignore();
        getline(cin, novoAluno.nome);
        cin >> N1 >> N2;
        novoAluno.media = (N1 * 0.3) + (N2 * 0.7);
        alunos.push_back(novoAluno);
    }
    
    sort(alunos.begin(), alunos.end(), compare);
    
    cout << alunos[0].nome << endl;

    return 0;
}