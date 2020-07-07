#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

void print_binary(vector <int> number){
	for (int i = number.size() - 1; i >= 0; i--)
		cout << number[i] << " ";
	cout << "\n";
}

vector <int> convertDecimaltoBinary(long long int n){
	vector <int> binaryNumber;
    long long int x; 
    int i = 1;

    while(n != 0){
    	x = n%2;
    	n /= 2;
    	binaryNumber.push_back(x*i);
    	//i *= 10;
    }
    return binaryNumber;
}

long long int convertBinaryToDecimal(vector <int> n)
{
    long long int decimalNumber = 0;
    for (int i = 0; i < n.size(); i++)
    	decimalNumber += pow(2,i)*n[i];
    return decimalNumber;
}


vector <int> sum_circuit(vector <int> a, vector <int> b){
	int n = a.size();
	int m = b.size();
	vector <int> c;
	int tam = n;
	if (n > m){
		tam = m;
	}
	
	for (int i = 0; i < tam; i++){
		if (a[i] == 1 && b[i] == 1)
			c.push_back(0);
		if ((a[i] == 1 && b[i] == 0)||(a[i] == 0 && b[i] == 1))
			c.push_back(1);
		if (a[i] == 0 && b[i] == 0)
			c.push_back(0);
	}

	if (n - m > 0)
		for (int i = 0; i < n-m; i++)
			c.push_back(a[m+i]);
	if (m - n > 0)
		for (int i = 0; i < m-n; i++)
			c.push_back(b[n+i]);

	return c;
}

int main(){
	long long int a, b;
	while (cin >> a){
		cin >> b;
		vector <int> a_binary = convertDecimaltoBinary(a);
		vector <int> b_binary = convertDecimaltoBinary(b);
		vector <int> c = sum_circuit(a_binary, b_binary);
		long long int result = convertBinaryToDecimal(c);
		cout << result << "\n";
	}


	return 0;
}