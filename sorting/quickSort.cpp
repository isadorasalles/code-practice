#include <bits/stdc++.h>

#define _ ios::sync_with_stdio(0);cin.tie(0);

using namespace std;

void print_seq(vector <int> seq){
	for (int i = 0; i < seq.size(); i++)
		cout << seq[i] << " ";
	cout << "\n";
}

int partition(vector <int> &seq, int start, int end){
	int pivot = seq[end-1];
	int i = start;
	int j = end-2;
	int aux;
	while (i <= j){
		if (seq[i] > pivot){
			aux = seq[j];
			seq[j] = seq[i];
			seq[i] = aux;
			j--;
		}
		else
			i++;
	}

	aux = seq[i];
	seq[i] = pivot;
	seq[end-1] = aux;

	return i;
}

void quickSort(vector <int> &seq, int start, int end){
	int pivotPartition;
	if(start < end){
		pivotPartition = partition(seq, start, end);
		quickSort(seq, start, pivotPartition);
		quickSort(seq, pivotPartition+1, end);
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
	quickSort(seq, 0, n);
	print_seq(seq);

	return 0;
}