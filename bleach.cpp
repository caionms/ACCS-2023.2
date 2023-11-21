#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>

using namespace std;

int binarySearch(const std::vector<std::string>& array, const std::string& target) {
    int left = 0;
    int right = array.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == target) {
            return mid; 
        } else if (array[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main()
{
    string nome;
    int N, M;
    
    vector<string> aliados;

    cin >> N;
    
    for (int i=0;i<N;i++) {
        cin >> nome;
        aliados.push_back(nome);
    }
    
    cin >> M;
    
    int contador_de_amigos = 0;
    
    sort(aliados.begin(), aliados.end());
    
    for (int i=0;i<M;i++) {
        cin >> nome;
        if (binarySearch(aliados, nome) != -1) {
            contador_de_amigos++;
        }
    }
    
    if(contador_de_amigos == M) {
        cout << "Sociedade das almas salva, Ichigo" << endl;
    } else {
        cout << "Estamos perdidos, Ichigo" << endl;
    }

    return 0;
}