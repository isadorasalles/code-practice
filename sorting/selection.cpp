#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

void print_seq(vector <int> seq){
	for (int i = 0; i < seq.size(); i++)
		cout << seq[i] << " ";
	cout << "\n";
}

void selectionSort(vector <int> seq, int n){
	int min = seq[0];
	int min_index = 0;
	for (int i = 0; i < n-1; i++){
		min = INT_MAX;
		for (int j = i; j < n; j++){
			if (seq[j] < min){
				min = seq[j];
				min_index = j;
			}
		}
		//swap
		int aux = seq[i];
		seq[i] = min;
		seq[min_index] = aux;
	}
	print_seq(seq);
	
}

int main(){

	int n, aux;
	cin >> n;  // vector lenght
	vector <int> seq;
	for (int i = 0; i < n; i++){
		cin >> aux;
		seq.push_back(aux);
	}
	selectionSort(seq, n);

	return 0;
}