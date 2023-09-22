#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B, C, D, E, F;
    
    cin >> A >> B >> C >> D >> E >> F;
    A = fabs(A - 2023)*2;
    B = fabs(B - 2023)*2;
    C = fabs(C - 2023)*2;
    D = fabs(D - 2023)*2;
    E = fabs(E - 2023)*2;
    F = fabs(F - 2023)*2;
    
    cout << "Luther " << A << endl;
    cout << "Diego " << B << endl;
    cout << "Alisson " << C << endl;
    cout << "Klaus " << D << endl;
    cout << "Five " << A+B+C+D+E+F << endl;
    cout << "Ben " << E << endl;
    cout << "Viktor " << F << endl;

    return 0;
}
