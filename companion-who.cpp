#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>

using namespace std;

struct companion{  
    string nome; 
    int regen;
}; 

bool compare(companion a, companion b){
    if (a.regen != b.regen) {
        return a.regen < b.regen;
    }
    else {
        return a.nome < b.nome;
    }
}

int main()
{
    int G;
    string nome;
    
    vector<companion> companions;
    
    while (cin >> nome >> G) {
        companion novoCompanion;
        novoCompanion.nome = nome;
        novoCompanion.regen = G;
        companions.push_back(novoCompanion);
    }
    
    sort(companions.begin(), companions.end(), compare);
    
    int vecSize = companions.size();
    
    for(int i=0;i<vecSize;i++) {
        cout << companions[i].nome << endl;
    }

    return 0;
}