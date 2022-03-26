#include<iostream>
using namespace std;

int main() {
	int row, column, i, j;
	cout << "Masukkan Jumlah Baris Matriks: ";
	cin >> row;
	cout << "Masukkan Jumlah Kolom Matriks: ";
	cin >> column;
    int matriks[row][column];
	for(i = 0; i < row; i++) {
		for(j = 0; j < column; j++) {
            cout << "Masukkan Elemen Matriks [" << i << "," << j << "] : ";
			cin >> matriks[i][j];
		}
	}
	cout << "Hasil matriks dikalikan dengan bilangan 5:" << endl;
	for(i = 0; i < row; i++) {
		for(j = 0; j < column; j++) {
			matriks[i][j] *= 5;
			cout << matriks[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
