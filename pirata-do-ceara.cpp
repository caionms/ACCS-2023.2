#include <iostream>

using namespace std;

int main()
{
    int A, B, C, senha;
    
    cin >> A >> B >> C;
    
    senha = A + B + C;
    
    senha *= A;
    
    senha /= C;
    
    senha += 2012;
    
    cout << senha;

    return 0;
}