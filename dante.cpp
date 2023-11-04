#include <iostream>

using namespace std;

int main()
{
    int e, n, d, f;

    cin >> e >> n >> d >> f;

    int stamina = e - (n * 15);
    
    if (stamina <= 0) {
        cout << "Nao conseguiu chegar na ilha" << endl;
        return 0;
    }
    
    stamina += d * 10;
    
    stamina -= f * 15;
    
    if (stamina <= 0) {
        cout << "Nao conseguiu chegar na ilha" << endl;
    } else {
        cout << "Conseguiu chegar na ilha" << endl;
    }

    return 0;
}