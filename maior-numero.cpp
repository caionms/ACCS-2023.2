#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>

using namespace std;

bool compare(string X, string Y){
    string XY = X.append(Y);
 
    string YX = Y.append(X);
 
    return XY.compare(YX) > 0 ? 1 : 0;
}

int main()
{
    int N;
    vector<string> numeros;
    string aux;
    
    cin >> N;
    
    for(int i=0;i<N;i++) {
        cin >> aux;
        numeros.push_back(aux);
    }
    
    sort(numeros.begin(), numeros.end(), compare);
    
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i];   
    }
    
    return 0;
}