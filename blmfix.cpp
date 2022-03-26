#include <iostream>
using namespace std;
int main(){
    while (true){
        string name, nim, again;

        cout << "Masukkan Nama: "; getline(cin,name);

        cout << "Masukkan NIM: "; getline(cin,nim);

        if (name.length() < 3){


            cout << "Name is too short!" << endl;

        } else if (nim.length() != 8){

            cout << "Invalid nim!" << endl;

        } else {
            cout << "~~Nama dan NIM Sesuai~~" << endl;
            cout << "Nama: " << name << endl;
            cout << "NIM:" << nim << endl;    

            cout << "Lanjutkan? [y/n] "; cin >> again;

            if (again == "n")
                break;
        }
    }
    return 0;
}