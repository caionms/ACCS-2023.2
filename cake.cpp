#include <iostream>
#include <string>
#include <algorithm>    // std::sort
#include <vector>

using namespace std;

void print_cake(int A, int J) {
    int espacos = A - J;
    while(espacos--) {
        cout << ' ';
    }
    int zeros = (J * 2) - 1;
    while(zeros--) {
        cout << '0';
    }
    cout << endl;
    return;
}

int main()
{
    int A;
    char S;
    
    cin >> A >> S;
    
    if(S == 'b'){
        for(int J=A;J>=1;J--) {
            print_cake(A, J);
        }
    } else if (S == 'c') {
        for(int J=1;J<=A;J++) {
            print_cake(A, J);
        }
    }
    
    return 0;
}