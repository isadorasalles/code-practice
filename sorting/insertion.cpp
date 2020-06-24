#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

void print_seq(vector <int> seq){
	for (int i = 0; i < seq.size(); i++)
		cout << seq[i] << " ";
	cout << "\n";
}

void insertionSort(vector <int> seq, int n){
	for (int i = 1; i < n; i++){
		int key = seq[i];
		int j = i - 1;
		while(j >= 0 && key < seq[j]){
			seq[j + 1] = seq[j];
			j--;
		}
		seq[j+1] = key;
	}
	
}

int main(){

	int n, aux;
	cin >> n;  // vector lenght
	vector <int> seq;
	for (int i = 0; i < n; i++){
		cin >> aux;
		seq.push_back(aux);
	}
	insertionSort(seq, n);

	return 0;
}