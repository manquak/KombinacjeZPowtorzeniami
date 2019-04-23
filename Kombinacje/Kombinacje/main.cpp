#include <stdio.h>
#include <iostream>


using namespace std;

void printArr(int *tab, int n) {
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	cout << endl;
}

int counter = 0; // COUNTER GLOBALNY

void combination(int *tab, int *blank, int M, int N, int level) {
	if (level == M) {
		printArr(blank, M);
		counter++;
		return;
	}
	for(int i = 0; i<N; i++){
		blank[level] = tab[i];
		if(level != 0 && blank[level] >= blank[level-1] || level == 0)
			combination(tab, blank, M, N, level + 1);
	}		
}






int main() {
	int n;
	int m;
	cin >> n;
	cin >> m;
	int *set = new int[n];
	int *blank = new int[m]; 
	for (int i = 0; i < n; i++) {
		set[i] = i + 1;
	}
	cout << "Zbior liczb: ";
	printArr(set, n);
	combination(set, blank, m, n, 0);
	cout << "Liczba kombinacji:" << counter;



	// tworzenie tablicy plus wypisywanie jej.
	cin >> n;
	return 0;




}