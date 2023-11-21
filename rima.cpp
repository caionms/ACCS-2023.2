#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool rima(string a, string b) {
    if (a.length() < 3 || b.length() < 3) {
        return false; 
    }
    return a.substr(a.length() - 3, 3) == b.substr(b.length() - 3, 3);
}


int main()
{
    int N;
    string palavra;
    
    vector<string> palavras;
    
    cin >> N;
    
    for (int i=0;i<N;i++) {
        cin >> palavra;
        palavras.push_back(palavra);
    }
    
    cin >> palavra;
    
    bool sim = false;
    
    for (int i=0;i<N;i++) {
        if (rima(palavra, palavras[i])) {
            sim = true;
            break;
        } 
    }
    if(sim) {
        cout << "Sim" << endl;
    } else {
        cout << "Nao" << endl;
    }

    return 0;
}