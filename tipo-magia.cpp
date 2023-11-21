#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string ataque;
    string defesa;
    
    cin >> ataque >> defesa;
    
    if (ataque == "água") {
        if (defesa == "besta" or defesa == "fogo") {
            cout << "hit!" << endl;
        } else {
            cout << "countered!" << endl;
        }
    } else if (ataque == "besta") {
        if (defesa == "planta" or defesa == "solo") {
            cout << "hit!" << endl;
        } else {
            cout << "countered!" << endl;
        }
    } else if (ataque == "fogo") {
        if (defesa == "besta" or defesa == "planta") {
            cout << "hit!" << endl;
        } else {
            cout << "countered!" << endl;
        }
    } else if (ataque == "planta") {
        if (defesa == "água" or defesa == "solo") {
            cout << "hit!" << endl;
        } else {
            cout << "countered!" << endl;
        }
    } else if (ataque == "raio") {
        if (defesa == "água" or defesa == "besta" or defesa == "planta") {
            cout << "hit!" << endl;
        } else {
            cout << "countered!" << endl;
        }
    } else {
        if (defesa == "água" or defesa == "fogo" or defesa == "raio") {
            cout << "hit!" << endl;
        } else {
            cout << "countered!" << endl;
        }
    }
    
    return 0;
}