#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main(){
	double pi = 3.14159;
	double raio;
	cin >> raio;
	double result = raio*raio*pi;
	cout.precision(4);
	cout << "A=" << fixed << result << "\n";

	return 0;
}