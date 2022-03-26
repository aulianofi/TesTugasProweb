#include <iostream>
using namespace std;

int main(){

    while (true){
        string name,nim, again;

        cout << "Enter name: "; cin >> name;

        cout << "Enter nim: "; cin >> nim;

        if (name.length() < 3){

            cout << name.length() << endl;
            cout << "Name is too short!" << endl;

        } else if (nim.length() != 8){

            cout << "Invalid nim!" << endl;

        } else {

            cout << "Name and NIM valid!" << endl;
            cout << "Name: " << name << endl;
            cout << "NIM: " << nim << endl;    

            cout << "Continue? [y/n] "; cin >> again;

            if (again == "n")
                break;
            
        }
    
    }

    return 0;
}