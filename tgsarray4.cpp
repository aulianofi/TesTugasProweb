#include <iostream>
using namespace std;
int main()
{
    char nama[50], nilai;
    int nilai1, nilai2, nilai3, rata2;
    cout << "nama : ";
    cin >> nama;
    cout << "jumlah nilai : ";
    cin >> nilai;
    cout << "nilai 1 : ";
    cin >> nilai1;
    cout << "nilai 2 : ";
    cin >> nilai2;
    cout << "nilai 3 : ";
    cin >> nilai3;
    rata2 = (nilai1+nilai2+nilai3)/3;
    cout << nama << ", nilai rata-rata adalah " << rata2 << endl;

    return 0;
}