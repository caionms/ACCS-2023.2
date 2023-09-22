#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float R, D, LL, ML, ROI;
	cin >> R;
	cin >> D;
	
	LL = R - D;
	
	ML = (LL / R) * 100;
	
	ROI = (LL / D) * 100;
	
	cout << "Lucro Liquido: " << fixed << setprecision(2) << LL << endl;
	
	cout << "Margem de Lucro: " << fixed << setprecision(2) << ML << "%" << endl;
	
	cout << "ROI: " << fixed << setprecision(2) << ROI << "%" << endl;
	
	return 0;
}