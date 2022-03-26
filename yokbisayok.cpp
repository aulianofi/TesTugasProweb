#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    bool hasil;

    cout << "masukkan nilai x : ";
    cin >> x;
    cout << "masukkan nilai y : ";
    cin >> y;
    hasil = x <= y;
    cout << "hasil nya yaitu : " << hasil << endl;

    return 0;

}