#include <iostream>
using namespace std;

int main()
{
    int grade = ;
    bool nilai = grade < 17;

    switch (int(nilai))
    {
    case 0:
        cout << "sudah cukup umur";
        break;
    case 1:
        cout << "belum cukup umur";
        break;
    default:
        cout << "anda masih kecil";
    }

    return 0;
}