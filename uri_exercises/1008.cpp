#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
	int numero, horas;
	double valor;
	cin >> numero;
	cin >> horas;
	cin >> valor;
	double salario = valor*horas;
	cout << "NUMBER = " << numero << "\n";
	cout.precision(2);
	cout << "SALARY = U$ " << fixed << salario << "\n";

	return 0;
}