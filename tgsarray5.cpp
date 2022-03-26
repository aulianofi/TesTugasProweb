#include<iostream>
using namespace std;

int main() {
	int i;
    int numarray[10];
	for(i = 0; i < 10; i++) {
        cout << "Masukkan elemen array [" << i << "] : ";
        cin >> numarray[i];
	}
	for(i = 0; i < 10; i++) {
        if(numarray[i] == 8) {
            cout << "Nilai 8 terletak pada indeks ke-" << i << endl;
        }
	}
	return 0;
}
