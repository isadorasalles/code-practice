#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
	double a, b;
	double peso_A = 3.5;
	double peso_B = 7.5;
	cin >> a;
	cin >> b;
	double media = (peso_A*a + peso_B*b)/11;
	cout.precision(5);
	cout << "MEDIA = " << fixed << media << "\n";

	return 0;
}