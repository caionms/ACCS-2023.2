#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int M1, M2, M3, M4, energia;
    
    cin >> M1 >> M2 >> M3 >> M4;
    
    energia = (M1 * 120) + (M2 * 85) + (M3 * 50) + (M4 * 30);
    
    cout << energia;

    return 0;
}