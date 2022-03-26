#include <iostream>
using namespace std;
int main()
{
    int i;
    char x;
    char abjad[20]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't'};
    cout << ("masukkan input : "); 
    cin >> x;

    for (i=0; i<=20; i++) {
        if (x == abjad[i])
        cout << "terdapat huruf yang diinput" << endl;
        else continue;
    }

    return 0;
}